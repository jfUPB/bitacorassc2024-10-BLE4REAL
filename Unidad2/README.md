# Bitácora de aprendizaje

## SEMANA 6

### Sesion 1 26 febrero

#### micro sesion 1

Hoy iniciamos el emocionante proyecto de desarrollar nuestro propio juego Pong. Este clásico del mundo de los videojuegos nos proporcionará una excelente oportunidad para poner en práctica y mejorar nuestras habilidades en programación y diseño de juegos.

#### micro sesion 2

enguaje de Programación:

El desarrollo del juego se realizará exclusivamente en el lenguaje de programación C, excluyendo el uso de C++.
Biblioteca SDL2:

La implementación del juego hará uso de la biblioteca SDL2 para facilitar la manipulación de gráficos y la interacción con el sistema.
Entorno de Desarrollo:

El entorno de desarrollo será Visual Studio, y el sistema operativo de referencia será Windows.
Control de Versión:

Se llevará a cabo un estricto control de versión del programa utilizando un sistema de control de versiones como Git. Esto permitirá un seguimiento detallado de los cambios realizados en el código.
Representación de Elementos:

El juego debe representar en pantalla la pelota, las dos paletas de los jugadores y el tablero.
Movimiento de Paletas:

Las paletas de los jugadores deben poder moverse hacia la derecha y hacia la izquierda, controladas por la entrada del jugador mediante el teclado.
Movimiento de la Pelota:

La pelota se moverá de manera diagonal y rebotará en las paletas y los bordes del tablero.
Puntuación:

Se implementará un marcador en pantalla para mostrar la puntuación de ambos jugadores.
Colisiones:

El juego detectará y manejará las colisiones entre la pelota y las paletas, actualizando la dirección de la pelota según la posición del impacto.
Aumento de Velocidad:

La velocidad de la pelota aumentará gradualmente a medida que avanza el juego.
Historial de Eventos:

Se utilizará una lista enlazada para registrar eventos importantes, como la posición de la pelota y las paletas, así como la puntuación.
Entrada del Jugador:

Los jugadores podrán controlar las paletas mediante el teclado para golpear la pelota.
Inicio del Juego:

El juego iniciará ofreciendo la posibilidad de escoger entre un nuevo juego o reproducir el juego anterior.
Si no se guardó el juego anterior, se dará la opción exclusiva de comenzar un nuevo juego.
Reproducción:

Al finalizar el juego, se presentará la opción de jugar de nuevo o reproducir la partida anterior utilizando el historial de eventos registrado.
Almacenamiento en Archivo:

Los eventos del historial deberán ser almacenados en un archivo al finalizar una partida.
Carga del Último Juego:

Para reproducir el último juego, se implementará la carga desde el archivo que almacena el historial de eventos.


#### micro sesion 3
Etapa 1: Configuración Básica con SDL2

Configuración de un proyecto de C con SDL2.
Carga de una ventana en blanco en pantalla.
Mostrado de paletas y pelota en posiciones iniciales estáticas.
Implementación de la lógica básica para mover las paletas mediante el teclado.
Etapa 2: Movimiento de la Pelota y Rebotes

Implementación del movimiento de la pelota en diagonal.
Detección y manejo de colisiones con los bordes del tablero para que la pelota rebote.
Etapa 3: Colisiones con las Paletas y Puntuación

Detección y manejo de colisiones entre la pelota y las paletas.
Implementación de la lógica para actualizar la dirección de la pelota según la posición de impacto en la paleta.
Visualización de la puntuación de ambos jugadores en pantalla.
Etapa 4: Aumento de Velocidad

Implementación de la lógica para aumentar gradualmente la velocidad de la pelota a medida que avanza el juego.
Etapa 5: Historial de Eventos

Definición de la estructura para eventos (PongEvent) y nodos de la lista enlazada (Node).
Implementación de la lista enlazada para registrar eventos clave como posición de la pelota, paletas, puntuación y aumentos de velocidad.
Etapa 6: Registro de Eventos

En cada evento importante del juego, adición de un nuevo nodo con datos del evento a la lista enlazada.
Etapa 7: Almacenamiento en Archivo

Implementación de función para guardar historial de eventos en un archivo al finalizar una partida, utilizando un formato adecuado para su posterior lectura.
Etapa 8: Carga de Partidas

Creación de función para cargar historial de eventos desde un archivo a una lista enlazada en memoria que representará la partida.
Etapa 9: Reproducción de Partidas

Desarrollo de la función de reproducción que recorre la lista enlazada y restaura el estado del juego en cada evento, permitiendo revivir la partida paso a paso.

#### micro sesion 4

se ha avanzado a través de diversas etapas que nos han llevado desde la configuración básica del entorno de desarrollo hasta la implementación de funciones avanzadas que añaden profundidad y complejidad al juego.

### Sesion 2 28 febrero

#### micro sesion 1

se va a instalar el lenguaje c en el portatil, despues se debe abrir el visual studio y se procede a crerar un nuevo proyecto, se necesita un empity project en c++ (c++, windows, consola).
Se va a hacer una prueba basica 
en source files click derecho y se adiciona un nuevo item (main.c) y se adicciona

#### micro sesion 2

se usa una biblioteca externa, se tiene que tener otro directorio con los .lib y se le debe indicar donde estan los .h y los punto lib y el programa debe saber donde esta todo el codigo 

#### micro sesion 3

Configuración C/C++ -> Directorios de Inclusión Adicionales y agregar la ruta al directorio de encabezados externos (libs o external).

#### micro sesion 4

Con estas configuraciones, el programa debería saber dónde encontrar los encabezados y bibliotecas necesarios para utilizar la biblioteca externa. Asegúrate de que tu entorno de desarrollo esté actualizado según el sistema que estés utilizando.

### Sesion 3 28 febrero

#### micro sesion 1

``` c
#include <stdio.h>

 define V 21

 define H 75

void inicio (char campo [V] [H], int pelX,int pelY,int inijug,int finjug, int iniia,int finia);

void borde (char campo[V] [H]);

void raqjug (char campo [V][H], int inijug, int finjug);

void raqia (char campo[V]{H], int iniia, int finia);

void pel (char campo [V][H], int pelX , int pelY);

int main () {

int pelX,pelY inijug,finjug,iniia,finia;

char campo [V] [H];

pelX= 37;

pelY= 10;

inijug= 8;

finjug= 12;


iniia = 8;

finia = 12;

inicio (campo,pelX,pelY,inijug,finjug,iniia,finia);

leercamp(campo);

system ("pause");

return 0;
}

void inicio (char campo [V] [H], int pelX,int pelY,int inijug,int finjug, int iniia,int finia) {

borde (campo);

raqjug(campo,inijug,finjug);

raqia (campo, iniia,finjug);

pel (campo, pelX, pelY); 

}

void borde (char campo[V] [H]) {

int i,j; 

for (i = 0; i< v; i++){

for (j= 0; j<H; j++) {

if (i == 0||i== V-1) {

campo [i] [j] =  "-";

}
else if (j == 0 || j == H-1) {

campo [i][j] = "|";

}

else{

campo [i][j]= " ";

}

}

}

}

void raqjug (char campo [V][H], int inijug, int finjug){

int i,j;

for (i = inijug; 1<= finjug; i++){

for (j= 2; j<=3; j++){

campo[i][j]= "x";
}

}

}
void raqia (char campo[V]{H], int iniia, int finia){

int i,j;

for (i= iniia; i<= finia; i++){

for (j=H -4; j<= H - 3; j++) {

campo [i][j]= "x";

}

}

}

void pel (char campo [V][H], int pelX , int pelY){

campo [pelY][pelX] = "O";

}

void leercamp (char campo [V][H]){

int i=j;

for (i=0; i < V; i++) {

for (j = 0; j<H; j++) {

printf ("%c", campo[i][j]);

}

printf("/n");

}

} 
``` 

Se empezo con la tarea de construir el codigo en pong y lo primero que hice fue imprimir el campo, las raquetas y pelota


Se definen constantes simbólicas V y H para representar las dimensiones vertical y horizontal del campo de juego. A continuación, se declaran las variables pelX, pelY, inijug, finjug, iniia, y finia, las cuales se utilizan para gestionar la posición de la pelota y las raquetas. Además, se crea un array bidimensional llamado campo para representar el tablero del juego.

#### micro sesion 2 

inicia con la asignación de valores iniciales a las variables, como la posición de la pelota y las dimensiones de las raquetas. Luego, se llama a la función inicio que recibe el campo y las posiciones iniciales, y a su vez, invoca otras funciones (borde, raqjug, raqia, y pel) para establecer la estructura básica del juego.

#### micro sesion 3

La función inicio se encarga de inicializar el campo de juego mediante la llamada a las funciones borde, raqjug, raqia, y pel. La función borde establece los límites del campo, marcando los bordes con "-", "|", y dejando el interior como espacios en blanco. Las funciones raqjug y raqia colocan las raquetas del jugador y de la inteligencia artificial respectivamente, y la función pel sitúa la pelota en el campo.

#### micro sesion 4

La función borde crea los límites del campo de juego. Utiliza dos bucles anidados para iterar sobre cada posición del array bidimensional campo. Se asignan valores específicos en las posiciones correspondientes para representar el borde exterior con "-" y "|", mientras que el interior se llena con espacios en blanco.

#### micro sesion 5

La función leercamp se encarga de imprimir en la consola el estado actual del campo de juego. Utiliza dos bucles anidados para recorrer cada posición del array bidimensional campo y utiliza la función printf para mostrar cada carácter. Se imprime cada fila del campo seguida de un salto de línea ("/n").

*Este codigo es de prueba y podrian darse cambios o cambiar completamente durante el proceso*

## Semana 7

### Sesion 1 4 marzo

#### micro sesion 1

sobre el mismo codigo de la semana pasada se trabaja sobre el 

Inclusión de bibliotecas:


#include <stdio.h>
#include <SDL.h>
Aquí, se están incluyendo las bibliotecas necesarias. stdio.h es para las funciones de entrada/salida estándar, y SDL.h es para la biblioteca SDL.

Definición de la función de intercambio:

``` c
void fuctionSwap(int* a, int* b) {

   int temp = *a;
   *a = *b;
   *b = temp;
}
Esta función toma dos punteros a enteros como parámetros y realiza un intercambio de valores entre las variables a las que apuntan.

Función principal (main):


int main(int argc, char* argv[]) {

   SDL_Init(SDL_INIT_EVERYTHING);
    
   printf("hello IDED\n");

   int a = 10;
   int b = 20;

   printf("a:%d - b:%d\n", a, b);
   
   fuctionSwap(&a, &b);
   
   printf("a:%d - b:%d\n", a, b);

   SDL_Quit();

   return 0;
}
```

#### micro sesion 2


SDL_Init(SDL_INIT_EVERYTHING);: Inicializa la biblioteca SDL, preparándola para su uso.

printf("hello IDED\n");: Imprime un mensaje en la consola.

Se declaran dos variables enteras a y b con valores iniciales de 10 y 20.

printf("a:%d - b:%d\n", a, b);: Imprime los valores iniciales de a y b.

fuctionSwap(&a, &b);: Llama a la función fuctionSwap para intercambiar los valores de a y b.

printf("a:%d - b:%d\n", a, b);: Imprime los valores después del intercambio.

SDL_Quit();: Cierra y libera los recursos utilizados por SDL.

#### micro sesion 3

Los punteros en el código tienen un papel fundamental en la función functionSwap al permitir el intercambio de valores entre dos variables.

#### micro sesion 4

![image](https://github.com/jfUPB/bitacorassc2024-10-BLE4REAL/assets/110466693/a2a05b8c-7ac1-42e4-ae21-f94d76788386)

se imprimio el diseño del tablero de pong, a continuacion se va a seguir trabajando para que se peuda jugar

### Sesion 2 6 marzo

#### micro sesion 1


ariables Globales:

Son declaradas fuera de cualquier función o bloque de código.
Tienen un alcance global, lo que significa que pueden ser accedidas desde cualquier parte del programa, incluyendo funciones, clases u otros bloques de código.
``` c
#include <stdio.h>

// Declaración de variable global
int global_variable = 10;

void func() {
    // Acceso a la variable global desde una función
    
   printf("Valor de la variable global: %d\n", global_variable);
}

int main() {
    // Acceso a la variable global desde la función principal
    
   printf("Valor de la variable global desde main: %d\n", global_variable);

   // Llamada a la función que utiliza la variable global
    func();

   return 0;
}
```

Variables Locales:

Son declaradas dentro de una función o un bloque de código específico.
Tienen un alcance local, lo que significa que solo pueden ser accedidas dentro de la función o el bloque de código en el que fueron definidas.
Las variables locales pueden tener el mismo nombre en diferentes funciones sin causar conflictos, ya que cada función tiene su propio ámbito.

``` c
#include <stdio.h>

void func() {
    // Declaración de variable local
    int local_variable = 5;

   // Acceso a la variable local dentro de la función
    printf("Valor de la variable local: %d\n", local_variable);
}

int main() {
    // Intentar acceder a la variable local fuera de la función causará un error
    
   // printf("Intento de acceder a la variable local desde main: %d\n", local_variable); // Esto causará un error

   // Llamada a la función que utiliza la variable local
    func();

   return 0;
}
```

#### mmicro sesion 2

Game Loop (Bucle de Juego):

Un bucle de juego es una estructura repetitiva en un programa de videojuegos que se encarga de ejecutar continuamente las acciones necesarias para que el juego funcione. Está compuesto típicamente por tres fases: actualización del estado del juego, renderizado de la salida gráfica y gestión de la entrada del usuario. Este ciclo se repite continuamente mientras el juego está en ejecución


Delta Time:

Delta time (o tiempo delta) es la medida del tiempo transcurrido entre dos actualizaciones sucesivas en un programa de simulación o juego. Se utiliza para realizar cálculos basados en el tiempo, como la simulación de movimiento y animaciones, de manera que el rendimiento del juego sea consistente en diferentes sistemas y velocidades de hardware.

Variables Privadas:

En el contexto de la programación, variables privadas son aquellas que solo pueden ser accedidas y modificadas dentro de un ámbito específico, como una función, un bloque de código o, en el caso de la programación orientada a objetos, una clase. Este concepto de privacidad ayuda a encapsular y proteger datos, limitando su acceso directo desde otras partes del programa.

#### micro sesion 3
void gameloop(char campo[V][H], int pelX, int pelY, int inijug, int finjug, int iniia, int finia, int modX, int modY, int modia) {

   int gol;
   
   gol = 0;

   do
   
   {
   draw(campo);
   
   imput(campo, &pel, &pelY,&inijug, &finjug, &iniia,&finia,&modX,&modY,&modia);
   
   update();
   
   sleep(10);

   } while (gol == 0);
   
}   
gameloop: Esta función es el bucle principal del juego. Mientras la variable gol sea igual a 0, el juego continuará ejecutándose en un ciclo. Dentro del bucle, se llama a la función draw para dibujar el campo de juego, luego a input para manejar la entrada del usuario y finalmente a update para actualizar el estado del juego. Después de cada iteración, el programa espera 10 milisegundos antes de continuar con la siguiente iteración.

#### micro sesion 4
``` c
void draw(char campo[V][H]) {

   system("cls");

   leercamp(campo);

}
void imput(char campo[V][H], int* pelX, int* pelY, int* inijug, int* finjug, int* iniia, int* finia, int* modX, int* modY, int* modia) {

}
```

Se declaró una variable llamada gol e inicializada en 0. Esta variable se usará como condición de salida para el bucle do-while. Mientras gol sea igual a 0, el bucle seguirá ejecutándose.

Se inicia un bucle do-while. Esto asegura que el código dentro del bucle se ejecute al menos una vez antes de verificar la condición.

Se llama a la función draw(campo). Esta función se encarga de dibujar el campo de juego.

Se llama a la función input(campo, &pel, &pelY,&inijug, &finjug, &iniia,&finia,&modX,&modY,&modia). Aquí debería manejarse la entrada del usuario, pero la implementación específica está ausente en tu código (ya que la función input está vacía).

Se llama a la función update(). Esta función debería actualizar el estado del juego, aunque la implementación exacta también está ausente.

Se utiliza sleep(10) para pausar la ejecución del programa durante 10 milisegundos. Esto puede ser para controlar la velocidad del juego.

El bucle do-while continúa mientras gol sea igual a 0. La condición de salida se determinará por la lógica interna del juego, que no está presente en el código proporcionado.

### SESION 3 6 marzo

#### micro sesion 1
gameloop y draw

gameloop: Se establece el bucle principal del juego (do-while). Se inicializa gol en 0. Mientras gol sea 0, el bucle ejecuta draw, imput y update. La ejecución del bucle continúa hasta que gol no sea 0.

draw: Limpia la pantalla y llama a leercamp para mostrar el estado actual del campo de juego.

``` c
void gameloop(char campo[V][H], int pelX, int pelY, int inijug, int finjug, int iniia, int finia, int modX, int modY, int modia) {
    int gol;
    gol = 0;

    do {
        draw(campo);
        imput(campo, &pel, &pelY,&inijug, &finjug, &iniia,&finia,&modX,&modY,&modia,&gol);
        update();
        sleep(10);

    } while (gol == 0);
}   

void draw(char campo[V][H]) {
    system("cls");
    leercamp(campo);
}
```

#### micro sesion 2

Micro Sesión 2: imput

La función imput parece haber sido nombrada incorrectamente (debería ser input). Ignorando eso, la función maneja la lógica de la entrada del juego.

Si la posición de la pelota (pelY) es 1 o V - 2, invierte modY.

Si la posición de la pelota (pelX) es 1 o H - 2, invierte gol.

Si la posición de la pelota (pelX) es 4, verifica si toca al jugador (inijug a finjug). Si sí, invierte modX.

Si la posición de la pelota (pelX) es H - 5, verifica si toca a la inteligencia artificial (iniia a finia). Si sí, invierte modX.

``` c
void imput(char campo[V][H], int* pelX, int* pelY, int* inijug, int* finjug, int* iniia, int* finia, int* modX, int* modY, int* modia, int* gol) {
    int i;

    if (pelY == 1 || pelY == V - 2) {
        *modY *= -1; 
    }
    if (pelX == 1 || pelX == H - 2) {
        *gol *= -1;
    }

    if (pelX == 4) {
        for (i = (*inijug); i <= (*finjug); i++) {
            if (i == pelY) {
                *modX *= -1;
            }
        }
    }

    if (pelX == H - 5) {
        for (i = (*iniia); i <= (*finia); i++) {
            if (i == (*pelY)) {
                *modX *= -1;
            }
        }
    }
}
```

#### micro sesion 3

Micro Sesión 3: gameloop - Continuación

El bucle do-while en gameloop sigue ejecutándose mientras gol sea 0.

En cada iteración, se llama a draw para actualizar la pantalla, luego a input para manejar la entrada del usuario, y finalmente a update para actualizar el estado del juego.

Después de cada iteración, el programa espera 10 milisegundos (sleep(10)) antes de continuar con la siguiente iteración del bucle.

``` c
do {
    draw(campo);
    imput(campo, &pel, &pelY,&inijug, &finjug, &iniia,&finia,&modX,&modY,&modia,&gol);
    update();
    sleep(10);
} while (gol == 0);
```

#### micro sesion 4

Micro Sesión 4: input - Lógica de Rebotes y Goles

input maneja los rebotes de la pelota en los bordes verticales e invierte la dirección vertical (modY) en consecuencia.

También verifica si la pelota toca los bordes horizontales, invirtiendo gol en caso afirmativo.

Si la pelota está en la posición pelX == 4, verifica si toca al jugador (inijug a finjug) y, en caso afirmativo, invierte modX.

Si la pelota está en la posición pelX == H - 5, verifica si toca a la inteligencia artificial (iniia a finia) y, en caso afirmativo, invierte modX.

``` c
void imput(char campo[V][H], int* pelX, int* pelY, int* inijug, int* finjug, int* iniia, int* finia, int* modX, int* modY, int* modia, int* gol) {
    int i;

    if (pelY == 1 || pelY == V - 2) {
        *modY *= -1; 
    }
    if (pelX == 1 || pelX == H - 2) {
        *gol *= -1;
    }

    if (pelX == 4) {
        for (i = (*inijug); i <= (*finjug); i++) {
            if (i == pelY) {
                *modX *= -1;
            }
        }
    }

    if (pelX == H - 5) {
        for (i = (*iniia); i <= (*finia); i++) {
            if (i == (*pelY)) {
                *modX *= -1;
            }
        }
    }
}
```

#### micro sesion 5

El juego tiene un bucle principal (gameloop) que controla la lógica del juego hasta que se cumple alguna condición de salida (gol != 0).

draw se encarga de actualizar la pantalla y mostrar el estado actual del campo.

input maneja la lógica de la entrada del usuario, incluyendo rebotes de la pelota, goles y cambios en la dirección de la pelota al tocar jugadores o la inteligencia artificial.

El código podría necesitar ajustes y extensiones para una funcionalidad de juego completa.

## Semana 8

### Sesión 1

#### micro sesion 1 

se realizaron cambios en el codigo para que funcionara con sdl 

abordaremos la configuración inicial del juego y la ventana mediante la biblioteca SDL (Simple DirectMedia Layer). El código proporciona una estructura básica, con definiciones de constantes, variables globales y funciones esenciales para inicializar la ventana SDL. También se establece la estructura de los objetos de juego, como la pelota (ball) y la paleta (paddle). Además, se detallan funciones clave como initialize_window y setup, que preparan la ventana y configuran los valores iniciales de los objetos del juego.

#### micro sesion 2

nos enfocaremos en la entrada del usuario y la lógica de actualización del juego. La función process_input maneja eventos SDL, como teclas presionadas o liberadas, para controlar el movimiento de la paleta. La función update se encarga de calcular el tiempo necesario para mantener un framerate constante (FPS) y actualiza las posiciones de la pelota y la paleta según el tiempo transcurrido. También se implementan las condiciones de colisión con las paredes y la paleta, así como la respuesta a la situación de juego terminado.

#### micro sesion 3

se enfocara en la función de renderizado y la destrucción de la ventana. La función render utiliza SDL para dibujar los objetos del juego en la ventana, actualizando la pantalla en cada frame. Finalmente, la función destroy_window libera los recursos utilizados por SDL y cierra la aplicación de manera ordenada. Este código proporciona una estructura básica para un juego simple, donde la entrada del usuario, la lógica del juego y el renderizado se integran para crear una experiencia de juego completa.

#### micro sesion 4 

``` c
#include <stdio.h>
#include <SDL.h>

#define TRUE 1
#define FALSE 0
#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600
#define FPS 60
#define FRAME_TARGET_TIME (1000/FPS)

// Actividad para el video 20

///////////////////////////////////////////////////////////////////////////////
// Global variables
///////////////////////////////////////////////////////////////////////////////
int game_is_running = FALSE;
SDL_Window* window = NULL;
SDL_Renderer* renderer = NULL;
int last_frame_time = 0;

///////////////////////////////////////////////////////////////////////////////
// Declare two game objects for the ball and the paddle
///////////////////////////////////////////////////////////////////////////////
struct game_object {
    float x;
    float y;
    float width;
    float height;
    float vel_x;
    float vel_y;
} ball, paddle;

///////////////////////////////////////////////////////////////////////////////
// Function to initialize our SDL window
///////////////////////////////////////////////////////////////////////////////
int initialize_window(void) {
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
        fprintf(stderr, "Error initializing SDL.\n");
        return FALSE;
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
        return FALSE;
    }
    renderer = SDL_CreateRenderer(window, -1, 0);
    if (!renderer) {
        fprintf(stderr, "Error creating SDL Renderer.\n");
        return FALSE;
    }
    return TRUE;
}

///////////////////////////////////////////////////////////////////////////////
// Function to poll SDL events and process keyboard input
///////////////////////////////////////////////////////////////////////////////
void process_input(void) {
    SDL_Event event;
    SDL_PollEvent(&event);
    switch (event.type) {
    case SDL_QUIT:
        game_is_running = FALSE;
        break;
    case SDL_KEYDOWN:
        if (event.key.keysym.sym == SDLK_ESCAPE)
            game_is_running = FALSE;
        if (event.key.keysym.sym == SDLK_LEFT)
            paddle.vel_x = -400;
        if (event.key.keysym.sym == SDLK_RIGHT)
            paddle.vel_x = +400;
        break;
    case SDL_KEYUP:
        if (event.key.keysym.sym == SDLK_LEFT)
            paddle.vel_x = 0;
        if (event.key.keysym.sym == SDLK_RIGHT)
            paddle.vel_x = 0;
        break;
    }
}

///////////////////////////////////////////////////////////////////////////////
// Setup function that runs once at the beginning of our program
///////////////////////////////////////////////////////////////////////////////
void setup(void) {
    // Initialize values for the the ball object
    ball.width = 15;
    ball.height = 15;
    ball.x = 20;
    ball.y = 20;
    ball.vel_x = 300;
    ball.vel_y = 300;

    // Initialize the values for the paddle object
    paddle.width = 100;
    paddle.height = 20;
    paddle.x = (WINDOW_WIDTH / 2) - (paddle.width / 2);
    paddle.y = WINDOW_HEIGHT - 40;
    paddle.vel_x = 0;
    paddle.vel_y = 0;
}

///////////////////////////////////////////////////////////////////////////////
// Update function with a fixed time step
///////////////////////////////////////////////////////////////////////////////
void update(void) {
    // Calculate how much we have to wait until we reach the target frame time
    int time_to_wait = FRAME_TARGET_TIME - (SDL_GetTicks() - last_frame_time);

    // Only delay if we are too fast too update this frame
    if (time_to_wait > 0 && time_to_wait <= FRAME_TARGET_TIME)
        SDL_Delay(time_to_wait);

    // Get a delta time factor converted to seconds to be used to update my objects
    float delta_time = (SDL_GetTicks() - last_frame_time) / 1000.0F;

    // Store the milliseconds of the current frame
    last_frame_time = SDL_GetTicks();

    // update ball and paddle position
    ball.x += ball.vel_x * delta_time;
    ball.y += ball.vel_y * delta_time;
    paddle.x += paddle.vel_x * delta_time;
    paddle.y += paddle.vel_y * delta_time;

    // Check for ball collision with the walls
    if (ball.x <= 0 || ball.x + ball.width >= WINDOW_WIDTH)
        ball.vel_x = -ball.vel_x;
    if (ball.y < 0)
        ball.vel_y = -ball.vel_y;

    // Check for ball collision with the paddle
    if (ball.y + ball.height >= paddle.y && ball.x + ball.width >= paddle.x && ball.x <= paddle.x + paddle.width)
        ball.vel_y = -ball.vel_y;

    // Prevent paddle from moving outside the boundaries of the window
    if (paddle.x <= 0)
        paddle.x = 0;
    if (paddle.x >= WINDOW_WIDTH - paddle.width)
        paddle.x = WINDOW_WIDTH - paddle.width;

    // Check for game over
    if (ball.y + ball.height > WINDOW_HEIGHT) {
        ball.x = WINDOW_WIDTH / 2;
        ball.y = 0;
    }
}

///////////////////////////////////////////////////////////////////////////////
// Render function to draw game objects in the SDL window
///////////////////////////////////////////////////////////////////////////////
void render(void) {
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);

    // Draw a rectangle for the ball object
    SDL_Rect ball_rect = {
        (int)ball.x,
        (int)ball.y,
        (int)ball.width,
        (int)ball.height
    };
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &ball_rect);

    // Draw a rectangle for the paddle object
    SDL_Rect paddle_rect = {
        (int)paddle.x,
        (int)paddle.y,
        (int)paddle.width,
        (int)paddle.height
    };
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &paddle_rect);

    SDL_RenderPresent(renderer);
}

///////////////////////////////////////////////////////////////////////////////
// Function to destroy SDL window and renderer
///////////////////////////////////////////////////////////////////////////////
void destroy_window(void) {
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}

///////////////////////////////////////////////////////////////////////////////
// Main function
///////////////////////////////////////////////////////////////////////////////
int main(int argc, char* args[]) {
    game_is_running = initialize_window();

    setup();

    while (game_is_running) {
        process_input();
        update();
        render();
    }

    destroy_window();

    return 0;
}
```

### Sesión 2

#### Micro sesion 1

La biblioteca SDL_ttf. SDL_ttf es una extensión de SDL 2 que permite el uso de fuentes TrueType (TTF) para renderizar texto en las aplicaciones. A

Descargar SDL_ttf:
Puedes encontrar la biblioteca SDL_ttf en el sitio oficial de SDL: https://www.libsdl.org/projects/SDL_ttf/

Compilar e instalar:
Después de descargar SDL_ttf, descomprime el archivo y sigue las instrucciones en el archivo README o INSTALL que se incluye. Generalmente, el proceso de instalación implica ejecutar comandos como ./configure, make y make install en la terminal.

Enlazar con tu proyecto:
se debe asegurar de enlazar tu proyecto con la biblioteca SDL_ttf. Esto generalmente se hace agregando la opción -lSDL2_ttf al compilar tu programa. Además, incluye los encabezados necesarios en tu código fuente.


#### Micro sesion 2
Cargar una fuente TTF en tu proyecto:
se debe asegurar de tener una fuente TrueType (TTF) en un formato compatible (por ejemplo, .ttf). Puedes descargar fuentes TTF de sitios como Google Fonts.


#### Micro sesion 3

``` c
#include <SDL.h>
#include <SDL_ttf.h>

int main(int argc, char* argv[]) {
    // Inicializar SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        // Manejar el error
        return 1;
    }

    // Inicializar SDL_ttf
    if (TTF_Init() < 0) {
        // Manejar el error
        SDL_Quit();
        return 1;
    }

    // Crear una ventana
    SDL_Window* window = SDL_CreateWindow("SDL 2 Text with TTF", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_SHOWN);
    if (window == nullptr) {
        // Manejar el error
        TTF_Quit();
        SDL_Quit();
        return 1;
    }

    // Obtener el renderizador
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == nullptr) {
        // Manejar el error
        SDL_DestroyWindow(window);
        TTF_Quit();
        SDL_Quit();
        return 1;
    }

    // Cargar la fuente TTF
    TTF_Font* font = TTF_OpenFont("ruta/a/tu/fuente.ttf", 24);
    if (font == nullptr) {
        // Manejar el error
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        TTF_Quit();
        SDL_Quit();
        return 1;
    }

    // Crear una superficie con el texto
    SDL_Color textColor = {255, 255, 255}; // Color: blanco
    SDL_Surface* surface = TTF_RenderText_Solid(font, "Hola, mundo!", textColor);
    if (surface == nullptr) {
        // Manejar el error
        TTF_CloseFont(font);
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        TTF_Quit();
        SDL_Quit();
        return 1;
    }

    // Crear una textura desde la superficie
    SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);
    if (texture == nullptr) {
        // Manejar el error
        SDL_FreeSurface(surface);
        TTF_CloseFont(font);
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        TTF_Quit();
        SDL_Quit();
        return 1;
    }

    // Limpiar la superficie, ya que no se necesita después de crear la textura
    SDL_FreeSurface(surface);

    // Obtener las dimensiones de la textura
    int textWidth, textHeight;
    SDL_QueryTexture(texture, nullptr, nullptr, &textWidth, &textHeight);

    // Definir la posición del texto en la pantalla
    SDL_Rect textRect = {100, 100, textWidth, textHeight};

    // Renderizar la textura en la pantalla
    SDL_RenderCopy(renderer, texture, nullptr, &textRect);

    // Presentar el renderizador
    SDL_RenderPresent(renderer);

    // Esperar antes de cerrar la ventana
    SDL_Delay(3000);

    // Liberar recursos
    SDL_DestroyTexture(texture);
    TTF_CloseFont(font);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    TTF_Quit();
    SDL_Quit();

    return 0;
}
```

#### Micro sesion 4


Inclusión de Cabeceras:
Se incluyen las cabeceras necesarias de SDL y SDL_ttf.

Inicialización de SDL y SDL_ttf:
Se inicializan las bibliotecas SDL y SDL_ttf. En caso de error, el programa manejará la situación y saldrá con un código de error.

Creación de la Ventana y el Renderizador:
Se crea una ventana y un renderizador utilizando SDL. En caso de error en la creación, se maneja adecuadamente.

Carga de la Fuente TTF:
Se carga una fuente TTF. Es importante proporcionar la ruta correcta al archivo de fuente.

Renderización del Texto en una Superficie:
Se renderiza el texto "Hola, mundo!" en una superficie utilizando la fuente cargada y se especifica un color blanco.

Creación de una Textura desde la Superficie:
Se crea una textura desde la superficie para facilitar su renderización en la ventana.

Renderización de la Textura en la Ventana:
Se renderiza la textura en la ventana en una posición específica (en este caso, (100, 100)).

Presentación del Renderizador:
Se presenta el renderizador para que los cambios en la ventana sean visibles.

Espera antes de Cerrar la Ventana:
Se añade una pausa de tres segundos antes de cerrar la ventana y finalizar la aplicación.

Liberación de Recursos y Cierre de SDL y SDL_ttf:
Finalmente, se liberan los recursos utilizados y se cierran las bibliotecas SDL y SDL_ttf.

Este código proporciona una estructura básica para mostrar texto en una ventana utilizando SDL 2 y SDL_ttf, destacando la importancia de manejar errores y ajustar la ruta de la fuente según sea necesario.

### Sesión 3

#### micro sesion 1

En esta primera sesión, nos adentramos en los fundamentos de la programación en C utilizando el entorno de desarrollo Visual Studio. Creamos un proyecto básico de C++ Windows Console y escribimos un programa sencillo para imprimir "Hello IDED" en la consola. Aprendimos a compilar y ejecutar el programa, utilizando tanto la opción de correr sin depurar (Ctrl + F5) como la depuración (F5). Se exploró el concepto de breakpoints para entender la ejecución paso a paso, y se sugirió la búsqueda de tutoriales de depuración en YouTube.

``` c
#include <stdio.h>

int main() {
    printf("Hello IDED\n");
    return 0;
}
```

#### micro sesion 2

En la segunda sesión, nos sumergimos en el mundo de las bibliotecas externas, centrándonos en SDL2. Creamos otro proyecto de C++ Windows Console en Visual Studio y procedimos a descargar e instalar SDL2. Aprendimos la importancia de incluir los archivos de cabecera (.h) y vincular los archivos de biblioteca (.lib) en el proyecto. Configuramos las rutas en Visual Studio para facilitar el proceso de compilación y construimos un programa básico que inicializa SDL2.

``` c
#include <SDL.h>

int main() {
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
        // Manejar el error
        return -1;
    }

    // Resto del código de inicialización de SDL2

    SDL_Quit();
    return 0;
}
```

#### micro sesion 3

Durante la tercera sesión, avanzamos en el desarrollo de nuestro proyecto utilizando SDL2. Implementamos la manipulación de gráficos básicos, como la creación de una ventana y la renderización de formas simples. Introducimos el manejo de eventos para capturar la interacción del usuario con el teclado y el ratón.

``` c
#include <SDL.h>

int main() {
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
        // Manejar el error
        return -1;
    }

    SDL_Window* window = SDL_CreateWindow("Mi Ventana", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderClear(renderer);

    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderDrawLine(renderer, 0, 0, 800, 600);

    SDL_RenderPresent(renderer);

    SDL_Delay(2000);  // Esperar 2 segundos antes de cerrar la ventana

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
```

#### micro sesion 4

En la cuarta sesión, nos sumergimos en conceptos más avanzados de programación en C. Exploramos las estructuras de control, como if-else y bucles (for, while), y discutimos la importancia de escribir funciones modulares y reutilizables. Creamos un programa que utiliza estas estructuras para realizar operaciones matemáticas simples.

``` c

#include <stdio.h>

// Declaración de función
int suma(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 5, num2 = 10;
    
    if (num1 < num2) {
        printf("La suma es: %d\n", suma(num1, num2));
    } else {
        printf("El primer número no es menor al segundo.\n");
    }

    return 0;
}
```

#### micro sesion 5


Bitácora: Sesión 5 - Trabajo con Archivos y Estructuras de Datos Básicas

En nuestra quinta sesión, abordamos la manipulación de archivos y estructuras de datos básicas en C. Desarrollamos un programa que lee y escribe en archivos, así como también implementamos estructuras de datos como arreglos y listas sencillas.

``` c
#include <stdio.h>

struct Persona {
    char nombre[50];
    int edad;
};

int main() {
    // Trabajar con archivos
    FILE* archivo = fopen("datos.txt", "w");
    fprintf(archivo, "Hola, este es un archivo de texto.\n");
    fclose(archivo);

    // Trabajar con estructuras
    struct Persona persona1;
    strcpy(persona1.nombre, "Juan");
    persona1.edad = 25;

    printf("Nombre: %s, Edad: %d\n", persona1.nombre, persona1.edad);

    // Uso de arreglos
    int numeros[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; ++i) {
        printf("%d ", numeros[i]);
    }

    return 0;
}
```

### sesion 1 18 marzo

#### micro sesion 1

En esta microsesión, inicializaremos dos contadores para llevar la cuenta de las veces que la pelota toca los extremos superior e inferior de la pantalla. También cargaremos la fuente que se utilizará para renderizar los contadores.


``` c
Copy code
// Inicialización de los contadores y la fuente
int top_counter = 0; // Contador para pelotas que tocan el extremo superior
int bottom_counter = 0; // Contador para pelotas que tocan el extremo inferior
TTF_Font* font = NULL;

int initialize_window(void) {
    // Otras inicializaciones...

    // Inicializar SDL_ttf
    if (TTF_Init() < 0) {
        fprintf(stderr, "Error initializing SDL_ttf.\n");
        return FALSE;
    }

    // Cargar la fuente
    font = TTF_OpenFont("Roboto-ThinItalic.ttf", 24);
    if (!font) {
        fprintf(stderr, "Error loading font.\n");
        return FALSE;
    }

    return TRUE;
}


```

#### micro sesion  2

En esta microsesión, actualizaremos los contadores en función de si la pelota toca los extremos superior o inferior de la pantalla, y luego los renderizaremos en la ventana del juego.

```c
Copy code
void update(void) {
    // Otras actualizaciones...

    // Actualizar contadores si la pelota toca los extremos superior o inferior
    if (ball.y <= 0) {
        top_counter++;
        ball.vel_y = -ball.vel_y;
    }
    if (ball.y + ball.height >= WINDOW_HEIGHT) {
        bottom_counter++;
        ball.vel_y = -ball.vel_y;
    }

    // Resto del código de actualización...
}

void render(void) {
    // Otras renderizaciones...

    // Renderizar contadores
    SDL_Color textColor = {255, 255, 255}; // Color blanco

    // Contador superior (derecha)
    char top_counter_text[16];
    snprintf(top_counter_text, sizeof(top_counter_text), "%d", top_counter);
    SDL_Surface* topCounterSurface = TTF_RenderText_Blended(font, top_counter_text, textColor);
    SDL_Texture* topCounterTexture = SDL_CreateTextureFromSurface(renderer, topCounterSurface);

    // Posición y tamaño del contador superior
    SDL_Rect topCounterRect;
    topCounterRect.x = WINDOW_WIDTH - topCounterSurface->w - 50;
    topCounterRect.y = 50;
    topCounterRect.w = topCounterSurface->w;
    topCounterRect.h = topCounterSurface->h;

    // Renderizar el contador superior en la ventana
    SDL_RenderCopy(renderer, topCounterTexture, NULL, &topCounterRect);

    // Liberar recursos del contador superior
    SDL_FreeSurface(topCounterSurface);
    SDL_DestroyTexture(topCounterTexture);

    // Resto de renderización de contadores...
}
```

#### micro sesion 3
Inicialización de SDL_ttf: Se inicializó SDL_ttf utilizando la función TTF_Init(). Esta inicialización es crucial para poder cargar y utilizar fuentes TrueType en el juego.

Carga de la fuente: Se utilizó la función TTF_OpenFont() para cargar una fuente TrueType desde un archivo .ttf. En este caso, se cargó la fuente "Roboto-ThinItalic.ttf" con un tamaño de 24 puntos. La fuente se asignó a una variable del tipo TTF_Font* para su posterior uso en el renderizado de texto.

Renderizado de texto: Se utilizó la función TTF_RenderText_Blended() para renderizar el texto en una superficie SDL. Esta función crea una superficie que contiene el texto renderizado en la fuente y el color especificados. En este proyecto, se renderizó el texto de los contadores que muestran las veces que la pelota toca los extremos superior e inferior de la pantalla.

Creación de texturas: Después de renderizar el texto en una superficie, se creó una textura SDL a partir de esa superficie utilizando SDL_CreateTextureFromSurface(). Esto convierte el texto renderizado en una textura que puede ser dibujada en el renderizador.

Dibujado del texto en la pantalla: Utilizando las funciones SDL_RenderCopy() y SDL_RenderPresent(), se dibujó la textura del texto en el renderizador y se presentó en la pantalla.

Liberación de recursos: Al finalizar el juego, se liberaron los recursos asociados a la fuente utilizando TTF_CloseFont() y se realizó la limpieza de SDL_ttf con TTF_Quit().

#### micro sesion 4

En resumen, SDL_ttf se utilizó para cargar, renderizar y mostrar texto en el juego, lo que permitió agregar información visual al jugador, como los contadores de colisiones con los extremos de la pantalla.
