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


Variables Locales:

Son declaradas dentro de una función o un bloque de código específico.
Tienen un alcance local, lo que significa que solo pueden ser accedidas dentro de la función o el bloque de código en el que fueron definidas.
Las variables locales pueden tener el mismo nombre en diferentes funciones sin causar conflictos, ya que cada función tiene su propio ámbito.

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

void draw(char campo[V][H]) {

   system("cls");

   leercamp(campo);

}
void imput(char campo[V][H], int* pelX, int* pelY, int* inijug, int* finjug, int* iniia, int* finia, int* modX, int* modY, int* modia) {




}

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

#### micro sesion 2

Micro Sesión 2: imput

La función imput parece haber sido nombrada incorrectamente (debería ser input). Ignorando eso, la función maneja la lógica de la entrada del juego.

Si la posición de la pelota (pelY) es 1 o V - 2, invierte modY.

Si la posición de la pelota (pelX) es 1 o H - 2, invierte gol.

Si la posición de la pelota (pelX) es 4, verifica si toca al jugador (inijug a finjug). Si sí, invierte modX.

Si la posición de la pelota (pelX) es H - 5, verifica si toca a la inteligencia artificial (iniia a finia). Si sí, invierte modX.

oid imput(char campo[V][H], int* pelX, int* pelY, int* inijug, int* finjug, int* iniia, int* finia, int* modX, int* modY, int* modia, int* gol) {
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

#### micro sesion 3

Micro Sesión 3: gameloop - Continuación

El bucle do-while en gameloop sigue ejecutándose mientras gol sea 0.

En cada iteración, se llama a draw para actualizar la pantalla, luego a input para manejar la entrada del usuario, y finalmente a update para actualizar el estado del juego.

Después de cada iteración, el programa espera 10 milisegundos (sleep(10)) antes de continuar con la siguiente iteración del bucle.

do {
    draw(campo);
    imput(campo, &pel, &pelY,&inijug, &finjug, &iniia,&finia,&modX,&modY,&modia,&gol);
    update();
    sleep(10);
} while (gol == 0);


#### micro sesion 4

Micro Sesión 4: input - Lógica de Rebotes y Goles

input maneja los rebotes de la pelota en los bordes verticales e invierte la dirección vertical (modY) en consecuencia.

También verifica si la pelota toca los bordes horizontales, invirtiendo gol en caso afirmativo.

Si la pelota está en la posición pelX == 4, verifica si toca al jugador (inijug a finjug) y, en caso afirmativo, invierte modX.

Si la pelota está en la posición pelX == H - 5, verifica si toca a la inteligencia artificial (iniia a finia) y, en caso afirmativo, invierte modX.

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

#### micro sesion 5

El juego tiene un bucle principal (gameloop) que controla la lógica del juego hasta que se cumple alguna condición de salida (gol != 0).

draw se encarga de actualizar la pantalla y mostrar el estado actual del campo.

input maneja la lógica de la entrada del usuario, incluyendo rebotes de la pelota, goles y cambios en la dirección de la pelota al tocar jugadores o la inteligencia artificial.

El código podría necesitar ajustes y extensiones para una funcionalidad de juego completa.



