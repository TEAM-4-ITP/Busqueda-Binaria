## **BÚSQUEDA BINARIA**

***Programa de consola utilizando el Método de Búsqueda Binaria***

------------

El programa que se presenta fue realizado en el lenguaje de programación C++, asimismo el compilador utilizado fue Dev C++, el código fuente esta anexado junto con este archivo, pero aqui mismo se describe gran parte del código fuente, por último, se presenta unas capturas de pantalla de la ejecución del programa para comprobar que efectivamente el programa funciona correctamente.

¿En qué consiste la búsqueda binaria?

> Si la lista está ordenada, la búsqueda binaria proporciona una técnica de búsqueda mejorada. Una búsqueda binaria en una lista ordenada, se situa la lectura en el centro de la lista y se comprueba si nuestra clave coincide con el valor del elemento central. Si no se encuentra el valor de la clave, se sitúa uno en la mitad inferior o superior del elemento central de la lita. 

------------

------------


El código fuente comienza con la importación de las librerias esenciales para realizar el programa.

![imagen](https://user-images.githubusercontent.com/71055467/97735530-11c2ca00-1aa0-11eb-9b2c-5f4c9ab986e0.png)

Lo que se presenta en la siguiente captura es la declaración de variables de tipo primitivo, las cuales se utilizarán más adelante. Asimismo, todas estas variables están declaradas dentro de la función main que es donde empieza la ejecución del programa.

![imagen](https://user-images.githubusercontent.com/71055467/97735795-6c5c2600-1aa0-11eb-9e2b-4c9bc8e6583b.png)

A continuación el programa pedirá al usuario cinco números las cuales serán almacenados en cada una de las variables respectivas. a su vez formarán parte del array que se declara más adelante para que este pueda ser recorrido y determinar si existe o no el elemento buscado.

![imagen](https://user-images.githubusercontent.com/71055467/97736133-daa0e880-1aa0-11eb-9048-76a9cea30230.png)

En la captura siguiente se presenta el código sobre lo que trata este programa y no es más que de la búsqueda binaria. Como ya se explicó anteriormente, la búsqueda se inicia de la parte central de lista, la búsqueda continua en cada una de las siguientes mitades, dependiendo si no encuentra dicho dato. Una vez encontrado el dato se asigna a una variable un caracter señalando que se ha encontrado.

![imagen](https://user-images.githubusercontent.com/71055467/97736764-c6a9b680-1aa1-11eb-87bd-df23f0913981.png)

Si la variable anterior está señalado que el dato se ha encontrado el dato simplemente se imprime un mensaje con ayuda de la sentencia if else, si no, solo imprime que no se ha encontrado.

![imagen](https://user-images.githubusercontent.com/71055467/97736962-01abea00-1aa2-11eb-911f-43e017ccb917.png)

La parte final del código se trata de preguntar al usuario si desea volver a ingresar nuevos datos, en caso de que si, vuelve a pedir los cinco números, y en caso contrario el programa finaliza con su ejecución.

![imagen](https://user-images.githubusercontent.com/71055467/97737166-46378580-1aa2-11eb-83fa-552177103955.png)


------------


------------


Las siguientes capturas se tratan de la ejecucíon del programa.

Al inicio de su ejecución el programa pide los cinco datos de manera ordenada.

![imagen](https://user-images.githubusercontent.com/71055467/97737405-931b5c00-1aa2-11eb-88ec-f39115a6b926.png)

Despues de ingresar los datos, se pide al usuario que digite un número para comenzar con su búsqueda.

![imagen](https://user-images.githubusercontent.com/71055467/97737535-c362fa80-1aa2-11eb-829a-53a582ac138d.png)

El número que quisimos que buscará fue el dos pero como anteriormente no ingresamos ese número, es por ello que nos imprime en pantalla el mensaje de que no se encontró el dato.

Ahora nos aparecen dos opciones, uno para salir y otro para ingresar datos nuevos, digitamos la opción uno para ingresar datos de nuevo.

![imagen](https://user-images.githubusercontent.com/71055467/97737868-31a7bd00-1aa3-11eb-9a40-ca2ef107d396.png)

![imagen](https://user-images.githubusercontent.com/71055467/97737894-3e2c1580-1aa3-11eb-819f-c1b8d3c7114e.png)

Ingresamos los datos y ahora digitaremos un número que se encuentra en la lista ordenada, para que el programa pueda empezar con la búsqueda del elemento.

![imagen](https://user-images.githubusercontent.com/71055467/97738073-7a5f7600-1aa3-11eb-92b1-831c215af3b6.png)

Como introducimos el número 5, en la siguiente captura nos debe aparecer que se encuentra en la posición 4, es decir, en la última posición.

![imagen](https://user-images.githubusercontent.com/71055467/97738103-83e8de00-1aa3-11eb-8eae-5640c821b252.png)

Y efectivamente, lo que se dijo anteriormente se puede comprobar con la captura presentada.

Ahora solo queda salir del  programa con solo introducir el número 1 en la siguiente pantalla que nos aparezca y automáticamente el programa finaliza, sin antes, con un mensaje.

![imagen](https://user-images.githubusercontent.com/71055467/97738502-125d5f80-1aa4-11eb-90f2-ac5fd77b99ae.png)

![imagen](https://user-images.githubusercontent.com/71055467/97738527-19846d80-1aa4-11eb-840e-f05380bb2e25.png)

------------


------------


En conclusión, al programar este ejemplo, nos ha sido de mucha utilidad para comprender el funionamiento de un método de  búsqueda, al menos de la búsqueda binaria. porque sabemos que existen otros más.
Otra de las características importantes que consideramos para este programa fue que está búsqueda funciona solo en una lista o arreglo odernado, es decir, los datos introducidos deben estar bien ordenados, para que la búsqueda sea exitosa.Programa de consola utilizando el Método de Búsqueda Binaria
