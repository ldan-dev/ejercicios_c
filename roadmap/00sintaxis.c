/*
 *
 * EJERCICIO:
 * - Crea un comentario en el código y coloca la URL del sitio web oficial del
 *   lenguaje de programación que has seleccionado.
 * - Representa las diferentes sintaxis que existen de crear comentarios
 *   en el lenguaje (en una línea, varias...).
 * - Crea una variable (y una constante si el lenguaje lo soporta).
 * - Crea variables representando todos los tipos de datos primitivos
 *   del lenguaje (cadenas de texto, enteros, booleanos...).
 * - Imprime por terminal el texto: "¡Hola, [y el nombre de tu lenguaje]!"
 *
 */
#include <stdio.h>
// variable global (macrOS):
#define PI 3.14159

int main(){

    // constante local:
    const float e=2.189;

    // variables locales:
    int entero=123;
    short corto=12;
    long largo=123456;
    
    float flotante=3.145;
    double doble=0.12345678;

    char c='x';
    char nombre[100];

    printf("ingresa tu nombre: ");
    fgets(nombre,100,stdin);

    printf("hola %s",nombre);

    printf("entero: %d \n",entero);
    printf("corto: %i \n",corto);
    printf("long: %ld \n",largo);
    printf("float: %f \n",flotante);
    printf("double: %f \n",doble);
    printf("char: %c \n",c);
    

    return 0;
}