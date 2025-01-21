// 2. Si una persona es mayor de 18 años y tiene ingresos iguales o superiores a $5000 mensuales debe pagar impuestos. Escribir un programa que pregunte al usuario su edad y sus ingresos mensuales y muestre por pantalla si tiene que pagar o no.

#include <stdio.h>

int main(){
    int edad;
    float ingresos;

    printf("introduzca su edad: ");
    scanf("%d",&edad);

    printf("introduzca sus ingresos mensuales: ");
    scanf("%f",&ingresos);

    if (edad>18 || ingresos>=5000)
    {
        printf("Usted debe de pagar impuestos ");
    }else{
        printf("Usted NO debe de pagar impuestos ");
    }
    

    return 0;
}