// AVIÑA NERI LEONARDO DANIEL

#include <stdio.h>
// #include <math.h>

int main(){

    int n, x; //n=#de exactitud, x=exponente
    int denom=1, num=1;
    float e=1;

    printf("ingresa el exponente de euler (e^x): ");
    scanf("%d",&x);
    printf("ingresa cuantos numeros de exactitud quieres: ");
    scanf("%d",&n);

    for (int i = 1; i < n; i++){
        denom*=i;
        num*=x;
        // int numerador=pow(x,i);
        float termino=(float)num/denom;
        // printf("num=%d / den=%d = %f\n",num,denom,termino);
        e+=termino;
    }

    printf("el valor aproximado de euler es: %f",e);
    return 0;
}