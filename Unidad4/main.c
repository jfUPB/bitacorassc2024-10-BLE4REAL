#include <stdio.h>
#include <SDL.h>
#include <SDL_ttf.h>
#include <stdbool.h>

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600
#define FPS 60
#define FRAME_TARGET_TIME (1000/FPS)
#define MAX_FRAMES 1000

// Definición de la estructura para los objetos del juego
typedef struct {
    float x;
    float y;
    float width;
    float height;
    float vel_x;
    float vel_y;
} GameObject;

// Definición de la estructura para las paletas del juego
typedef struct {
    GameObject obj;
    int score;
} Paddle;

// Definición de la estructura para la pelota del juego
typedef struct {
    GameObject obj;
    int hits;
} Ball;

// Definición de la estructura para los resultados de colisiones
typedef struct {
    bool collision;
    float new_vel_x;
    float new_vel_y;
} CollisionResult;

// Definición de la estructura para los objetos del juego con puntero a función de colisión
typedef struct {
    GameObject* obj;
    CollisionResult(*collision_function)(void*, void*);
} GameEntity;

// Variables globales
static Ball ball;
static Paddle paddle;
static Paddle opposite_paddle;
static SDL_Window* window = NULL;
static SDL_Renderer* renderer = NULL;
static TTF_Font* font = NULL;
static int top_counter = 0;
static int bottom_counter = 0;
static int game_is_running = 0;
static int last_frame_time = 0;
static int replay_frame_count = 0;
static struct {
    Ball ball;
    Paddle paddle;
    Paddle opposite_paddle;
} replay_frames[MAX_FRAMES];

// Función para procesar la entrada del usuario
static void process_input(void);

// Función para la colisión entre la pelota y las paletas
static CollisionResult ball_paddle_collision(void* ball, void* paddle);

// Función para actualizar el estado del juego
static void update(void);

// Función para renderizar el juego
static void render(void);

// Función principal del juego
int main(int argc, char* args[]) {
    // Inicialización de SDL y otros recursos
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
        fprintf(stderr, "Error initializing SDL.\n");
        return 0;
    }

    window = SDL_CreateWindow(
        NULL,
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        WINDOW_WIDTH,
        WINDOW_HEIGHT,
        SDL_WINDOW_BORDERLESS
    );

    if (!window) {
        fprintf(stderr, "Error creating SDL Window.\n");
        return 0;
    }

    renderer = SDL_CreateRenderer(window, -1, 0);

    if (!renderer) {
        fprintf(stderr, "Error creating SDL Renderer.\n");
        return 0;
    }

    if (TTF_Init() < 0) {
        fprintf(stderr, "Error initializing SDL_ttf.\n");
        return 0;
    }

    font = TTF_OpenFont("Roboto-ThinItalic.ttf", 24);

    if (!font) {
        fprintf(stderr, "Error loading font.\n");
        return 0;
    }

    // Creación de las entidades del juego (pelota, paletas)
    ball.obj.width = 15;
    ball.obj.height = 15;
    ball.obj.x = WINDOW_WIDTH / 2 - ball.obj.width / 2;
    ball.obj.y = WINDOW_HEIGHT / 2 - ball.obj.height / 2;
    ball.obj.vel_x = 300;
    ball.obj.vel_y = 300;
    ball.hits = 0;

    paddle.obj.width = 100;
    paddle.obj.height = 20;
    paddle.obj.x = (WINDOW_WIDTH / 2) - (paddle.obj.width / 2);
    paddle.obj.y = WINDOW_HEIGHT - 40;
    paddle.obj.vel_x = 0;
    paddle.obj.vel_y = 0;
    paddle.score = 0;

    opposite_paddle = paddle;
    opposite_paddle.obj.y = 20;
    opposite_paddle.obj.vel_x = 0;
    opposite_paddle.obj.vel_y = 0;
    opposite_paddle.score = 0;

    last_frame_time = SDL_GetTicks();
    game_is_running = 1;

    // Bucle principal del juego
    while (game_is_running && (top_counter < 10 && bottom_counter < 10)) {
        process_input();
        update();
        render();
    }

    // Limpieza de recursos y finalización del juego
    TTF_CloseFont(font);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    TTF_Quit();
    SDL_Quit();

    return 0;
}

// Función para procesar la entrada del usuario
static void process_input(void) {
    SDL_Event event;
    SDL_PollEvent(&event);

    switch (event.type) {
    case SDL_QUIT:
        game_is_running = 0;
        break;
    case SDL_KEYDOWN:
        switch (event.key.keysym.sym) {
        case SDLK_ESCAPE:
            game_is_running = 0;
            break;
        case SDLK_LEFT:
            paddle.obj.vel_x = -400;
            break;
        case SDLK_RIGHT:
            paddle.obj.vel_x = +400;
            break;
        case SDLK_a:
            opposite_paddle.obj.vel_x = -400;
            break;
        case SDLK_d:
            opposite_paddle.obj.vel_x = +400;
            break;
        }
        break;
    case SDL_KEYUP:
        switch (event.key.keysym.sym) {
        case SDLK_LEFT:
        case SDLK_RIGHT:
            paddle.obj.vel_x = 0;
            break;
        case SDLK_a:
        case SDLK_d:
            opposite_paddle.obj.vel_x = 0;
            break;
        }
        break;
    }
}

// Función para la colisión entre la pelota y las paletas
static CollisionResult ball_paddle_collision(void* ball, void* paddle) {
    CollisionResult result = { false, 0, 0 };
    int margin_of_error = 1;

    if (((GameObject*)ball)->y + ((GameObject*)ball)->height + margin_of_error >= ((GameObject*)paddle)->y && ((GameObject*)ball)->y <= ((GameObject*)paddle)->y + ((GameObject*)paddle)->height + margin_of_error) {
        if (((GameObject*)ball)->x + ((GameObject*)ball)->width >= ((GameObject*)paddle)->x && ((GameObject*)ball)->x <= ((GameObject*)paddle)->x + ((GameObject*)paddle)->width) {
            result.collision = true;
            float ball_center_x = ((GameObject*)ball)->x + ((GameObject*)ball)->width / 2;
            float paddle_center_x = ((GameObject*)paddle)->x + ((GameObject*)paddle)->width / 2;
            float offset = (ball_center_x - paddle_center_x) / (((GameObject*)paddle)->width / 2);
            result.new_vel_x = ((GameObject*)ball)->vel_x + offset * 50;
            result.new_vel_y = -((GameObject*)ball)->vel_y;
            if (result.new_vel_x > 500) {
                result.new_vel_x = 500;
            }
            else if (result.new_vel_x < -500) {
                result.new_vel_x = -500;
            }
        }
    }

    return result;
}

// Función para actualizar el estado del juego
static void update(void) {
    int time_to_wait = FRAME_TARGET_TIME - (SDL_GetTicks() - last_frame_time);
    if (time_to_wait > 0 && time_to_wait <= FRAME_TARGET_TIME)
        SDL_Delay(time_to_wait);

    float delta_time = (SDL_GetTicks() - last_frame_time) / 1000.0F;
    last_frame_time = SDL_GetTicks();

    ball.obj.x += ball.obj.vel_x * delta_time;
    ball.obj.y += ball.obj.vel_y * delta_time;
    paddle.obj.x += paddle.obj.vel_x * delta_time;
    paddle.obj.y += paddle.obj.vel_y * delta_time;
    opposite_paddle.obj.x += opposite_paddle.obj.vel_x * delta_time;
    opposite_paddle.obj.y += opposite_paddle.obj.vel_y * delta_time;

    if (ball.obj.y <= 0) {
        top_counter++;
        ball.obj.vel_y = -ball.obj.vel_y;
    }
    if (ball.obj.y + ball.obj.height >= WINDOW_HEIGHT) {
        bottom_counter++;
        ball.obj.vel_y = -ball.obj.vel_y;
    }

    if (ball.obj.x <= 0 || ball.obj.x + ball.obj.width >= WINDOW_WIDTH)
        ball.obj.vel_x = -ball.obj.vel_x;

    CollisionResult paddle_collision = ball_paddle_collision(&ball, &paddle);
    if (paddle_collision.collision) {
        ball.obj.vel_x = paddle_collision.new_vel_x;
        ball.obj.vel_y = paddle_collision.new_vel_y;
    }

    CollisionResult opposite_paddle_collision = ball_paddle_collision(&ball, &opposite_paddle);
    if (opposite_paddle_collision.collision) {
        ball.obj.vel_x = opposite_paddle_collision.new_vel_x;
        ball.obj.vel_y = opposite_paddle_collision.new_vel_y;
    }

    if (ball.obj.y + ball.obj.height >= paddle.obj.y && ball.obj.y <= paddle.obj.y + paddle.obj.height) {
        if (ball.obj.x < paddle.obj.x && ball.obj.x + ball.obj.width > paddle.obj.x) {
            ball.obj.x = paddle.obj.x - ball.obj.width;
        }
        else if (ball.obj.x > paddle.obj.x && ball.obj.x < paddle.obj.x + paddle.obj.width) {
            ball.obj.x = paddle.obj.x + paddle.obj.width;
        }
    }

    if (ball.obj.y + ball.obj.height >= opposite_paddle.obj.y && ball.obj.y <= opposite_paddle.obj.y + opposite_paddle.obj.height) {
        if (ball.obj.x < opposite_paddle.obj.x && ball.obj.x + ball.obj.width > opposite_paddle.obj.x) {
            ball.obj.x = opposite_paddle.obj.x - ball.obj.width;
        }
        else if (ball.obj.x > opposite_paddle.obj.x && ball.obj.x < opposite_paddle.obj.x + opposite_paddle.obj.width) {
            ball.obj.x = opposite_paddle.obj.x + opposite_paddle.obj.width;
        }
    }

    if (ball.obj.y <= 0 || ball.obj.y + ball.obj.height >= WINDOW_HEIGHT) {
        ball.obj.x = WINDOW_WIDTH / 2 - ball.obj.width / 2;
        ball.obj.y = WINDOW_HEIGHT / 2 - ball.obj.height / 2;
    }

    if (top_counter >= 10 || bottom_counter >= 10) {
        game_is_running = 0;
    }

    if (replay_frame_count < MAX_FRAMES) {
        replay_frames[replay_frame_count].ball = ball;
        replay_frames[replay_frame_count].paddle = paddle;
        replay_frames[replay_frame_count].opposite_paddle = opposite_paddle;
        replay_frame_count++;
    }
}

// Función para renderizar el juego
static void render(void) {
    SDL_SetRenderDrawColor(renderer, 50, 0, 50, 255);
    SDL_RenderClear(renderer);

    SDL_Rect ball_rect = { (int)ball.obj.x, (int)ball.obj.y, (int)ball.obj.width, (int)ball.obj.height };
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &ball_rect);

    SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);

    SDL_Rect paddle_rect = { (int)paddle.obj.x, (int)paddle.obj.y, (int)paddle.obj.width, (int)paddle.obj.height };
    SDL_RenderFillRect(renderer, &paddle_rect);

    SDL_Rect opposite_paddle_rect = { (int)opposite_paddle.obj.x, (int)opposite_paddle.obj.y, (int)opposite_paddle.obj.width, (int)opposite_paddle.obj.height };
    SDL_RenderFillRect(renderer, &opposite_paddle_rect);

    SDL_Color textColor = { 0, 255, 0 };

    char top_counter_text[16];
    snprintf(top_counter_text, sizeof(top_counter_text), "%d", top_counter);
    SDL_Surface* topCounterSurface = TTF_RenderText_Blended(font, top_counter_text, textColor);
    SDL_Texture* topCounterTexture = SDL_CreateTextureFromSurface(renderer, topCounterSurface);

    SDL_Rect topCounterRect = { WINDOW_WIDTH - topCounterSurface->w - 50, 50, topCounterSurface->w, topCounterSurface->h };
    SDL_RenderCopy(renderer, topCounterTexture, NULL, &topCounterRect);

    SDL_FreeSurface(topCounterSurface);
    SDL_DestroyTexture(topCounterTexture);

    char bottom_counter_text[16];
    snprintf(bottom_counter_text, sizeof(bottom_counter_text), "%d", bottom_counter);
    SDL_Surface* bottomCounterSurface = TTF_RenderText_Blended(font, bottom_counter_text, textColor);
    SDL_Texture* bottomCounterTexture = SDL_CreateTextureFromSurface(renderer, bottomCounterSurface);

    SDL_Rect bottomCounterRect = { 50, WINDOW_HEIGHT - bottomCounterSurface->h - 50, bottomCounterSurface->w, bottomCounterSurface->h };
    SDL_RenderCopy(renderer, bottomCounterTexture, NULL, &bottomCounterRect);

    SDL_FreeSurface(bottomCounterSurface);
    SDL_DestroyTexture(bottomCounterTexture);

    SDL_RenderPresent(renderer);
}