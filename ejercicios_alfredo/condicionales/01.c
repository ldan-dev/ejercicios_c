#include <stdio.h>

// 1. Escribir un programa que pregunte al usuario su edad y muestre por pantalla si es mayor de edad ono

int main(){
    int edad;

    printf("introduzca su edad: ");
    scanf("%d",&edad);

    if (edad>17)
    {
        printf("eres mayor de edad");
    }else
    {
        printf("eres menor de edad");
    }
    

    return 0;
}