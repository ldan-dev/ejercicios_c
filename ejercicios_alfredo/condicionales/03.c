// 3. Una empresa que tiene salas de juegos para todas las edades y quiere calcular el  precio que debe cobrar a sus clientes por entrar. Escribir un programa que pregunte al usuario su edad y mostrar el precio de la entrada. Si el usuario es menor de 4  años puede entrar gratis, si tiene entre 4 y 18 años debe pagar $10.00 y si es mayor  de 18 años, $20.00

#include <stdio.h>

int main(){

    int edad;
    // float precio;
    printf("introduzca su edad: ");
    scanf("%d",&edad);

    if (edad<4 ){
        printf("Puede entrar gratis ");
    }else if (edad>=4 && edad<=18){
        printf("Usted de pagar $10.00 ");
    }else{
        printf("Usted de pagar $20.00 ");
    }

    return 0;
}