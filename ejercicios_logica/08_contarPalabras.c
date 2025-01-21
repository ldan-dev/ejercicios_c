/*
 * Crea un programa que cuente cuantas veces se repite cada palabra
 * y que muestre el recuento final de todas ellas.
 * - Los signos de puntuación no forman parte de la palabra.
 * - Una palabra es la misma aunque aparezca en mayúsculas y minúsculas.
 * - No se pueden utilizar funciones propias del lenguaje que
 *   lo resuelvan automáticamente.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char cadena[100], invertida[100];
    int size=0;

    do
    {
        printf("ingrese una cadena: ");
        scanf("%s", cadena);
        size=strlen(cadena);
    } while (size>100 || size==0); 

    for (int i = 0; i < size-1; i++){
        cadena[i]=tolower(cadena[i]);
    }
    

    return 0;
}