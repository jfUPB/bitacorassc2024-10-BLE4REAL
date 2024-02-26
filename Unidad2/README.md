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


