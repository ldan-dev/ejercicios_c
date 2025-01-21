/*
 * Crea un programa se encargue de transformar un número
 * decimal a binario sin utilizar funciones propias del lenguaje que lo hagan directamente.
 */

#include <stdio.h>
#include <string.h>

int main(){

    int decimal=0;
    int bin[8]={0};
    int div,i=7;

    printf("ingrese el numero decimal: ");
    scanf("%d",&decimal);

    div=decimal;

    while (div!=0){
        bin[i]=div%2;
        div/=2;
        i--;   
    }
    
    printf(" el numero en binaro es: ");
    for (i = 0; i < 8; i++){
        printf("%d ",bin[i]);
    }

    return 0;
}