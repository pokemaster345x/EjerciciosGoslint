# 🧱 Problema: Cobertura de Plaza con Losas Cuadradas

Uno de los problemas clásicos de geometría computacional consiste en **calcular cuántas losas cuadradas de tamaño `a × a`** se necesitan para **cubrir completamente una plaza rectangular de tamaño `n × m`**, **sin permitir cortes ni rotaciones**.  
> ⚠️ **Importante**: No importa si las losas sobrepasan los límites de la superficie de la plaza, siempre y cuando toda la plaza quede cubierta.

## Funciones que debes conocer
double ceil(double x): Una funcion techo es aquella que redondea x hacia arriba (+1) y devuelve el valor integral más pequeño que no sea menor que x. Ejemplo ceil(5.5) -> 6.0, ceil(4) -> 4.0, ceil(-3,8) -> -3.0

Función opuesta: 

double floor(double x): Una funcion techo es aquella que redondea x hacia abajo y devuelve el valor integral más grande que no sea mayor que x. Ejemplo floor(5.5) -> 5.0, floor(4) -> 4.0, floor(-3,8) -> -4.0

---

## 🧾 Entrada

Tres enteros positivos:

- `n`: largo de la plaza  
- `m`: ancho de la plaza  
- `a`: tamaño de la losa cuadrada

---

## 📤 Salida

Un único entero:  
El **número mínimo de losas** necesarias para cubrir completamente la plaza.

---

## 📘 Definiciones y Librerías

Para resolver este problema, es útil incluir la siguiente librería:

```cpp
#include <math.h>
```

## Cómo aplicarlo a TheatreSquare 

Sabemos por simple lógica que la operación principal en este tipo de ejercicios es la división. Esto se debe a que se quiere cubrir una cierta cantidad o distancia (como una longitud o área) usando piezas del mismo tamaño —por ejemplo, baldosas cuadradas de lado a, o pasos de longitud fija, en simples palabras, nos pregunta por cuantas baldosas de tamaño a son necesarias para cubrir totalmente la superficie.


El teatro tiene dimensiones  n y m, cada una representa un lado, primeramente se debe dividir cada lado sobre el tamaño de la baldosa 

Si al hacer la división el residuo es diferente de cero quiere decir que aún hay un tramo del teatro que no está cubierto, matemáticamente quiere decir que el cociente es decimal, por lo que es necesario agregar una baldosa más, por ejemplo, el lado m es 6 y la baldosa a es 4, 6/4 = 1.5, quiere decir que a la plaza la cubre una baldosa y media, pero la restricción dice que no se pueden cortar, por lo que se debe colocar la baldosa entera, matemáticamente es buscar un número entero más pequeño que sea mayor que 1.5, en este caso 2.

