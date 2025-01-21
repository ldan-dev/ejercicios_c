# Apuntes de Programación en C

## Introducción

Este documento contiene apuntes y ejercicios básicos de programación en C.

## Contenido

1. [Introducción](#introducción)
2. [Variables y Tipos de Datos](#variables-y-tipos-de-datos)
3. [lenguajes de programación de Alto nivel](#lenguajes-de-programación-de-alto-nivel)
4. [Estructuras de Control](#estructuras-de-control)
5. [Funciones](#funciones)
6. [Enlaces de Interés](#enlaces-de-interés)

## Algoritmo
La definición de un algoritmo debe describir tres partes:
`Entrada`, `Proceso` y `Salida`.

1. Un algoritmo debe ser preciso
2. Un algoritmo debe estar definido
3. Un algoritmo debe ser Finito.

## lenguajes de programación de Alto nivel
Están diseñados para que las personas escriban y entiendan los
programas de un modo mucho más fácil que los lenguajes máquina y
ensambladores. Otra razón es que un programa escrito en lenguaje
de alto nivel es independiente de la máquina

## Variables y Tipos de Datos

## char
tamaño de 1 byte

## short


### Ejemplo de Código

```c
#include <stdio.h>

int main() {
    int numero = 10;
    printf("El número es %d\n", numero);
    return 0;
}
```

## Estructuras de Control

Aquí se explicarán las estructuras de control como `if`, `else`, `while`, `for`, etc.

### Ejemplo de Código

```c
#include <stdio.h>

int main() {
    int i;
    for (i = 0; i < 5; i++) {
        printf("i es %d\n", i);
    }
    return 0;
}
```

## Funciones

Sección dedicada a la creación y uso de funciones en C.

### Ejemplo de Código

```c
#include <stdio.h>

void saludar() {
    printf("Hola, Mundo!\n");
}

int main() {
    saludar();
    return 0;
}
```

## Enlaces de Interés

- [Documentación de C](https://en.cppreference.com/w/c)
- [Tutorial de C](https://www.learn-c.org/)
