/*
 * Crea un programa que invierta el orden de una cadena de texto
 * sin usar funciones propias del lenguaje que lo hagan de forma automática.
 * - Si le pasamos "Hola mundo" nos retornaría "odnum aloH"
 */

#include <stdio.h>
#include <string.h>

int main(){

    char cadena[100], invertida[100];
    int size=0;

    do
    {
        printf("ingrese una cadena: ");
        scanf(" %99[^\n]", cadena);
        size=strlen(cadena);
    } while (size>100 || size==0);
    
    printf("%d \n",size);

    int j=strlen(cadena)-1;
    for (int i = 0; i < size; i++){
        invertida[i]=cadena[j];            
        j--;
    }
    invertida[size] = '\0';    

    printf("%s invertida es : %s",cadena,invertida);

    return 0;
}