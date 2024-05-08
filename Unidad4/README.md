# Bitácora de aprendizaje

## ¿Cómo voy?

- [ ] Terminé la fase de investigación. 
- [ ] Terminé la fase de aplicación.
- [ ] Terminé la fase de compartir.

## Compartir

### Resultado de aprendizaje 1 (RAE1)

> Muestra que tu aplicación cumple con todos los requisitos establecidos.

> Explicas cómo solucionaste cada requisito de la aplicación.

### Resultado de aprendizaje 2 (RAE2)

> Muestras cómo probaste cada requisito por separado.

> Muestras cómo probaste que la aplicación funciona integrada, con todos los requisitos.

## Proceso

En cada sesión vas a realizar experimentos para explorar a profundidad los conceptos. También podrás 
implementar requisitos de la aplicación, resolver algún error, implementar una prueba o probar 
la integración de varias partes. Cada una de estas actividades las vas a reportar en tu bitácora
usando la siguiente plantilla:

``` markdown
> 1. ¿Qué tipo de actividad estás evidenciando?
> 2. Describe la actividad y cuál es el propósito de esta y/o la pregunta que quieres investigar.
> 3. Todas las actividades deben estar soportadas por código fuente. Vas a inidicar el commit que tiene
>    el resultado final de la actividad.
> 4. ¿Cuáles es el resultado de la actividad?
> 5. ¿Qué aprendiste de la actividad?
```

> :warning: **MUY IMPORTANTE**
> 
> Cada sesión debe tener al menos dos actividades para ganar los puntos de la sesión. La actividad debe estar completa,
> es decir, debe tener los 5 puntos de la plantilla realizados correctamente.

### Semana 14


#### Sesión 1

> 1. ¿Qué tipo de actividad estás evidenciando?

hoy se evidencio un control de versiones utilizando https://ominous-space-umbrella-p4ww9rvxx67c9pjg.github.dev

> 2. Describe la actividad y cuál es el propósito de esta y/o la pregunta que quieres investigar.

el proposito es entender el funcionamiento de la pagina, ademas de conocer algunos codigos para el funcionamiento del archivo main.c 

> 4. Todas las actividades deben estar soportadas por código fuente. Vas a inidicar el commit que tiene
>    el resultado final de la actividad.

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void* imprime_x(void *param){
    while(1) printf("x");
    return NULL;
}


int main(int argc, char *argv[]){
    pthread_t threadID;
    pthread_create(&threadID,NULL,&imprime_x,NULL);
    while(1) printf("o");
    exit(EXIT_SUCCESS);
}


> 6. ¿Cuáles es el resultado de la actividad?

el programa tiene dos hilos: uno principal que imprime la letra 'o' en un bucle infinito en la función main(), y otro hilo secundario que imprime la letra 'x' en un bucle infinito en la función imprime_x().

Este programa utiliza la biblioteca pthread de C para crear dos hilos. Uno de los hilos, el hilo principal, se ejecuta en la función main() y se encarga de imprimir la letra 'o' repetidamente en un bucle infinito. El otro hilo se crea en la función imprime_x() y se encarga de imprimir la letra 'x' repetidamente en otro bucle infinito. Ambos hilos se ejecutan simultáneamente, lo que significa que las letras 'o' y 'x' se imprimirán en la terminal al mismo tiempo

> 8. ¿Qué aprendiste de la actividad?

a hacer un control de versiones, a enviar el codigo con el control de codigo fuente, tambien a crear archivos para la bitacora, algunos codigos como "clear" para limpiar la terminal y algunos funcionamientos extra de este

#### Sesión 2

¿Qué tipo de actividad estás evidenciando?

Estoy evidenciando una actividad de resolución de problemas relacionada con la concurrencia utilizando hilos en C.
Describe la actividad y cuál es el propósito de esta y/o la pregunta que quieres investigar.

La actividad consiste en corregir un programa que utiliza hilos para imprimir caracteres en paralelo. 

El propósito es identificar y resolver el problema que impide que los caracteres se impriman correctamente. La pregunta a investigar es por qué el programa no produce la salida esperada.
Todas las actividades deben estar soportadas por código fuente. Vas a inidicar el commit que tiene el resultado final de la actividad.
El código fuente proporcionado inicialmente es el siguiente:
c
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

struct threadParam_t
{
    char character;
    int counter;
};


void* imprime(void *parg){
    struct threadParam_t *pargTmp = (struct threadParam_t *)parg;
    for(int i = 0; i < pargTmp->counter;i++){
        printf("%c",pargTmp->character);
    }
    return NULL;
}


int main(int argc, char *argv[]){
    pthread_t threadID1;
    pthread_t threadID2;

    struct threadParam_t threadParam1 = {'a',30000};
    struct threadParam_t threadParam2 = {'b',20000};

    pthread_create(&threadID1,NULL,&imprime, &threadParam1);
    pthread_create(&threadID2,NULL,&imprime, &threadParam2);

    exit(EXIT_SUCCESS);
}

¿Cuál es el resultado de la actividad?
El resultado de la actividad, después de realizar las correcciones necesarias, es un programa que utiliza hilos para imprimir caracteres en paralelo de manera efectiva. Esto se logra al agregar la función pthread_join() para asegurarse de que el programa principal espere a que los hilos terminen antes de salir.
¿Qué aprendiste de la actividad?

De esta actividad, aprendí la importancia de comprender y manejar adecuadamente la concurrencia al trabajar con hilos en C. Es crucial asegurarse de que los hilos completen sus tareas antes de que el programa principal termine para evitar resultados inesperados.


#### Sesión 3

¿Qué tipo de actividad estás evidenciando?

Estoy evidenciando una actividad de programación en C utilizando la biblioteca SDL2 para la creación de hilos y el uso de semáforos para la sincronización entre los hilos.

Describe la actividad y cuál es el propósito de esta y/o la pregunta que quieres investigar.

La actividad consiste en aprender a utilizar hilos y semáforos en SDL2 para lograr la sincronización entre procesos y evitar condiciones de carrera en programas multihilo. El propósito es entender cómo funcionan los hilos y los semáforos en SDL2 y cómo se pueden utilizar para crear aplicaciones multihilo robustas y seguras. La pregunta que quiero investigar es cómo crear y utilizar hilos y semáforos en SDL2.

 El resultado final de la actividad está en el último ejemplo proporcionado, donde se utilizan semáforos para sincronizar dos hilos. El código se encuentra a continuación:

¿Cuál es el resultado de la actividad?

El resultado de la actividad es un programa en C que utiliza la biblioteca SDL2 para crear dos hilos y sincronizarlos mediante el uso de un semáforo. Uno de los hilos modifica una variable compartida, mientras que el otro hilo la lee después de que el primer hilo haya terminado de modificarla.

¿Qué aprendiste de la actividad?

#include <SDL2/SDL.h>
#include <SDL2/SDL_thread.h>
#include <stdio.h>

SDL_sem *semaphore;
int sharedData = 0;

// Función que ejecutará el primer hilo
int ThreadFunction1(void *data) {
    // Realiza algún trabajo
    SDL_Delay(1000);

    // Bloquea el semáforo
    SDL_SemWait(semaphore);

    // Modifica la variable compartida
    sharedData = 1;

    // Libera el semáforo
    SDL_SemPost(semaphore);

    return 0;
}

// Función que ejecutará el segundo hilo
int ThreadFunction2(void *data) {
    // Realiza algún trabajo
    SDL_Delay(2000);

    // Bloquea el semáforo
    SDL_SemWait(semaphore);

    // Lee la variable compartida
    printf("El valor de la variable compartida es: %d\n", sharedData);

    // Libera el semáforo
    SDL_SemPost(semaphore);

    return 0;
}

int main() {
    // Inicializar SDL
    SDL_Init(SDL_INIT_EVERYTHING);

    // Crear un semáforo
    semaphore = SDL_CreateSemaphore(1);

    // Crear hilos
    SDL_Thread *thread1 = SDL_CreateThread(ThreadFunction1, "Thread1", NULL);
    SDL_Thread *thread2 = SDL_CreateThread(ThreadFunction2, "Thread2", NULL);

    // Esperar a que los hilos terminen
    SDL_WaitThread(thread1, NULL);
    SDL_WaitThread(thread2, NULL);

    // Limpiar SDL
    SDL_DestroySemaphore(semaphore);
    SDL_Quit();

    return 0;
}

De esta actividad, aprendí cómo utilizar hilos y semáforos en SDL2 para lograr la sincronización entre procesos en programas multihilo. Entendí cómo evitar condiciones de carrera al controlar el acceso a recursos compartidos utilizando semáforos. También comprendí cómo crear y gestionar hilos en SDL2 para realizar tareas concurrentes en una aplicación.

### Semana 15

#### Sesión 1

> 1. ¿Qué tipo de actividad estás evidenciando?

La actividad que estoy evidenciando es una explicación informal sobre cómo usar la función pthread_join en un programa de hilos en C.

> 2. Describe la actividad y cuál es el propósito de esta y/o la pregunta que quieres investigar.

La actividad consiste en explicar cómo la función pthread_join se utiliza para asegurar que el hilo principal espere a que un hilo en particular termine antes de continuar con su ejecución. El propósito de esta actividad es clarificar cómo resolver el problema de que los hilos no terminen su trabajo antes de que el programa principal finalice. La pregunta que se busca investigar es cómo garantizar que los hilos completen sus tareas antes de que el programa principal termine su ejecución.

> 3. Todas las actividades deben estar soportadas por código fuente. Vas a inidicar el commit que tiene
>    el resultado final de la actividad.

La actividad está respaldada por el siguiente código fuente, con el commit correspondiente que tiene el resultado final de la actividad:Commit: [Implementación de pthread_join](link al commit)

// Código modificado con pthread_join
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

struct threadParam_t
{
    char character;
    int counter;
};

void* imprime(void *parg){
    struct threadParam_t *pargTmp = (struct threadParam_t *)parg;
    for(int i = 0; i < pargTmp->counter;i++){
        printf("%c",pargTmp->character);
    }
    return NULL;
}

int main(int argc, char *argv[]){
    pthread_t threadID1;
    pthread_t threadID2;

    struct threadParam_t threadParam1 = {'a',30000};
    struct threadParam_t threadParam2 = {'b',20000};

    pthread_create(&threadID1,NULL,&imprime, &threadParam1);
    pthread_join(threadID1,NULL); // Esperar a que el hilo threadID1 termine

    pthread_create(&threadID2,NULL,&imprime, &threadParam2);
    pthread_join(threadID2,NULL); // Esperar a que el hilo threadID2 termine

    exit(EXIT_SUCCESS);
}



> 5. ¿Cuáles es el resultado de la actividad?

El resultado de la actividad es un programa que utiliza pthread_join para asegurar que el hilo principal espere a que los hilos threadID1 y threadID2 terminen antes de finalizar la ejecución del programa. Esto garantiza que los trabajos de impresión de los hilos se completen antes de que el programa termine.

> 6. ¿Qué aprendiste de la actividad?

De esta actividad, aprendí la importancia de utilizar pthread_join para sincronizar la finalización de los hilos con el hilo principal en programas de hilos en C. También comprendí cómo garantizar que los hilos completen sus tareas antes de que el programa principal finalice, evitando así problemas de finalización prematura de los hilos.

#### Sesión 2

1. ¿Qué tipo de actividad estás evidenciando?

Estoy respondiendo a una solicitud para proporcionar un ejemplo de cómo agregar reproducción de audio a un código en C que implementa un juego simple utilizando la biblioteca SDL.

2. Describe la actividad y cuál es el propósito de esta y/o la pregunta que quieres investigar.

La actividad consiste en modificar la función play_audio del código existente para reproducir un tono simple en lugar de cargar un archivo de audio desde el disco. El propósito es demostrar cómo usar SDL para generar y reproducir audio en lugar de cargarlo desde un archivo externo. La pregunta que se investiga es cómo integrar la reproducción de audio en un juego SDL utilizando audio generado dinámicamente.

3. Todas las actividades deben estar soportadas por código fuente. Vas a inidicar el commit que tiene el resultado final de la actividad.

#include <SDL.h>
#include <stdio.h>

#define SAMPLE_RATE 44100
#define AMPLITUDE 28000
#define FREQUENCY 440

void play_audio(void) {
    SDL_AudioSpec want, have;
    SDL_AudioDeviceID audioDevice;

    SDL_memset(&want, 0, sizeof(want)); /* Cero la estructura */
    want.freq = SAMPLE_RATE;
    want.format = AUDIO_S16SYS;
    want.channels = 1;
    want.samples = 2048;
    want.callback = NULL; /* No necesitamos una función de devolución de llamada, así que la dejamos como NULL */

    audioDevice = SDL_OpenAudioDevice(NULL, 0, &want, &have, 0);
    if (audioDevice == 0) {
        printf("Unable to open audio device: %s\n", SDL_GetError());
        return;
    }

    float period = (float)SAMPLE_RATE / FREQUENCY;
    Uint8 *audioBuffer = (Uint8 *)malloc(have.samples * sizeof(Uint8));
    if (audioBuffer == NULL) {
        printf("Unable to allocate audio buffer.\n");
        SDL_CloseAudioDevice(audioDevice);
        return;
    }

    for (int i = 0; i < have.samples; i++) {
        float sample = AMPLITUDE * sin(2 * M_PI * i / period);
        Sint16 val = (Sint16)sample;
        audioBuffer[i * 2] = val & 0xFF;
        audioBuffer[i * 2 + 1] = (val >> 8) & 0xFF;
    }

    SDL_QueueAudio(audioDevice, audioBuffer, have.samples * sizeof(Uint8));
    SDL_PauseAudioDevice(audioDevice, 0); /* Iniciar la reproducción de audio */
    SDL_Delay(1000); /* Esperar un segundo antes de detener la reproducción */
    SDL_CloseAudioDevice(audioDevice);
    free(audioBuffer);
}

4. ¿Cuál es el resultado de la actividad?

El resultado de la actividad es una función play_audio modificada que reproduce un tono simple en lugar de cargar un archivo de audio desde el disco. Este tono se genera dinámicamente utilizando fórmulas matemáticas y se reproduce utilizando SDL.

5. ¿Qué aprendiste de la actividad?

De esta actividad, aprendí cómo generar y reproducir audio dinámicamente en SDL utilizando fórmulas matemáticas para crear un tono simple. También reforcé mi comprensión de cómo trabajar con la biblioteca SDL para manejar la reproducción de audio en un contexto de juego.

#### Sesión 3

> 1. ¿Qué tipo de actividad estás evidenciando?
> 2. Describe la actividad y cuál es el propósito de esta y/o la pregunta que quieres investigar.
> 3. Todas las actividades deben estar soportadas por código fuente. Vas a inidicar el commit que tiene
>    el resultado final de la actividad.
> 4. ¿Cuáles es el resultado de la actividad?
> 5. ¿Qué aprendiste de la actividad?

### Semana 16

#### Sesión 1

> 1. ¿Qué tipo de actividad estás evidenciando?
> 2. Describe la actividad y cuál es el propósito de esta y/o la pregunta que quieres investigar.
> 3. Todas las actividades deben estar soportadas por código fuente. Vas a inidicar el commit que tiene
>    el resultado final de la actividad.
> 4. ¿Cuáles es el resultado de la actividad?
> 5. ¿Qué aprendiste de la actividad?

#### Sesión 2

> 1. ¿Qué tipo de actividad estás evidenciando?
> 2. Describe la actividad y cuál es el propósito de esta y/o la pregunta que quieres investigar.
> 3. Todas las actividades deben estar soportadas por código fuente. Vas a inidicar el commit que tiene
>    el resultado final de la actividad.
> 4. ¿Cuáles es el resultado de la actividad?
> 5. ¿Qué aprendiste de la actividad?

#### Sesión 3

> 1. ¿Qué tipo de actividad estás evidenciando?
> 2. Describe la actividad y cuál es el propósito de esta y/o la pregunta que quieres investigar.
> 3. Todas las actividades deben estar soportadas por código fuente. Vas a inidicar el commit que tiene
>    el resultado final de la actividad.
> 4. ¿Cuáles es el resultado de la actividad?
> 5. ¿Qué aprendiste de la actividad?
