# Bitácora de aprendizaje

## SEMANA 2

### sesion 1: lunes 29 enero

#### micro sesion 1
En el video numero 6:
explican los conceptos básicos de la lógica booleana y cómo se puede utilizar para construir circuitos lógicos. Comienzan explicando los conceptos de verdad y falsedad, y cómo se pueden combinar para formar operaciones booleanas como AND, OR y NOT. Luego, muestran cómo se pueden utilizar estas operaciones para construir circuitos lógicos simples, como un sumador binario de un bit. También explican cómo se pueden utilizar las operaciones booleanas para construir circuitos más complejos.

#### micro sesion 2

[![Captura-de-pantalla-2024-01-29-144635.png](https://i.postimg.cc/DybzPpkd/Captura-de-pantalla-2024-01-29-144635.png)](https://postimg.cc/MvqxWDGv)

Se puede simplificar operaciones mas complejas mediante leyes 

[![Captura-de-pantalla-2024-01-29-152708.png](https://i.postimg.cc/sDShggXr/Captura-de-pantalla-2024-01-29-152708.png)](https://postimg.cc/KRGz9FBq)

#### micro sesion 3

explica los fundamentos de la lógica booleana, destacando los conceptos de verdad y falsedad, así como las operaciones básicas como AND, OR y NOT. Se destaca la forma en que estos conceptos se combinan para construir circuitos lógicos, empezando desde operaciones simples hasta llegar a circuitos más complejos, como un sumador binario de un bit. En general, la conclusión es que la lógica booleana proporciona las bases teóricas para el diseño y construcción de circuitos lógicos en electrónica digital, permitiendo la implementación de diversas funciones y operaciones mediante la combinación de las operaciones booleanas básicas.

#### micro sesion 4
En resumen, las funciones booleanas son la base de la representación y manipulación de información en informática. Desde la construcción de circuitos lógicos hasta la programación de computadoras, estas funciones desempeñan un papel crucial en la creación y operación de sistemas digitales.


-----------------------------------------------------------------------------------------------------------------------------------------------------------
### sesion 2: miercoles 31 enero

#### micro sesion 1

explica cómo las funciones booleanas se utilizan en la informática para representar y manipular información. También habla sobre cómo se pueden utilizar las funciones booleanas para construir circuitos lógicos y cómo se pueden utilizar para crear programas de computadora.

#### micro sesion 2

se aprende que por medio de tablas de valores se puedan contruir operaciones para determinar el valor de la funcion

[![PRIMERA.png](https://i.postimg.cc/J4tp5gYJ/PRIMERA.png)](https://postimg.cc/VdQ9Y78L)

tambien se puede observar una tabla de equivalencia con operaciones similares

[![segunda.png](https://i.postimg.cc/3JkpdHWy/segunda.png)](https://postimg.cc/kBdDpzQ9)

#### microsesion 3

se distinguieron algunos teoremas, uno de ellos es que se pueden hacer todo tipo de funciones solo con (not y and), mas adelante en el video se mostro otro teorema el cual dice que nand tambien es una alternativa para hacer todo tipo de operaciones

[![3.png](https://i.postimg.cc/rpMNdYvv/3.png)](https://postimg.cc/0zXwFZ5f)

por ultimo se hizo la tabla de valores que se solicitaba en la seccion de preguntas de la unidad 1 

[![VIDEO-7.png](https://i.postimg.cc/YCYH38dr/VIDEO-7.png)](https://postimg.cc/DSvHfQVH)

#### micro sesion 4

--------------------------------------------------------------------------------------------------------------------------------------------------------------

### sesion 3: miercoles 31 enero

Como se implementan las funciones booleanas usando hardware (gate logic) es un chip definido para ofrecer una funcion. Como nand. Hay 3 puertas  (and gate, or gate, not gate) estan diseñadas para obtener valores booleanos

[![1.png](https://i.postimg.cc/DwWdtVXS/1.png)](https://postimg.cc/nXJDDPTx)

Dicho circuito puede tener varias entradas pero una unica salida. 

[![Captura-de-pantalla-2024-01-31-144518.png](https://i.postimg.cc/qqM2wWrM/Captura-de-pantalla-2024-01-31-144518.png)](https://postimg.cc/bDWGNCdK)

Para 3 tipos de entradas se puede hacer un diseño con 2 puertas y una salida

[![Captura-de-pantalla-2024-01-31-145410.png](https://i.postimg.cc/ZKXyvWWq/Captura-de-pantalla-2024-01-31-145410.png)](https://postimg.cc/SJ7KwN70)

-------------------------------------------------------------------------------------------------------------------------------------------------------------

## SEMANA 3

### sesion 1: lunes 5 febrero

se realizo una actividad de circuitos logicos en donde mediante operaciones matematicas basicas se obtienen valores y estos se pueden usar para sumadores, latch y write. para los primeros puzzles habia que hacer operaciones basicas, posteriormente en las siguientes actividades se necesito usar una metodologia llamada ingenieria inversa. La ingenieria inversa se basa en tener una resolucion de problemas de atras hacia adelante

[![Imagen-de-Whats-App-2024-02-05-a-las-15-26-26-7bcbdd51.jpg](https://i.postimg.cc/GmPY8ZvX/Imagen-de-Whats-App-2024-02-05-a-las-15-26-26-7bcbdd51.jpg)](https://postimg.cc/TKwhBN7b)

este circuito sintetiza lo que es en si el circuito que opera en las computadoas


--------------------------------------------------------------------------------------------------------------------------------------------------------------
### sesion 2: miercoles 7 febrero

#### micro sesion 1:

revisar la estructura de la bitacora
revision de los puntos
realizar el ensamblador

se explica cómo los bits se utilizan en la computación para representar y almacenar datos. Un bit puede tener dos valores posibles: 0 o 1, que corresponden a apagado o encendido. Estos valores binarios se utilizan para representar números y otros datos en las computadoras.

#### micro sesion 2
En el caso específico de un computador de 8 bits, podemos calcular cuántos números diferentes puede representar. Cada bit tiene dos opciones (0 o 1), y al tener 8 bits, multiplicamos estas opciones juntas: 2^8 = 256

[![Captura-de-pantalla-2024-02-07-143335.png](https://i.postimg.cc/rFB80zRW/Captura-de-pantalla-2024-02-07-143335.png)](https://postimg.cc/SJG0HSrN)

#### microsesion 3

Por lo tanto, un computador de 8 bits puede representar 256 números diferentes123. Estos números incluyen tanto valores positivos como negativos, y el rango va desde -128 hasta 1274. Es importante tener en cuenta que esta capacidad de representación es fundamental en la programación.

un computador de 8 bits puede manejar 256 combinaciones únicas de valores binarios, lo que permite representar una variedad de números en su formato binario.

#### microsesion 3:
en las operaciones de salto, si se pone "000" no salt, en el caso que haya alguna variabilidad de valores entre 1 y 0 se producira un efecto
operaciones de salto: esto hace que en el cpu se puedan dar desplazamientos hacia distintas lineas de numeros



