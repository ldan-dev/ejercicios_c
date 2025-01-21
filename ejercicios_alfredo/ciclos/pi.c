// AVIÑA NERI LEONARDO DANIEL
#include <stdio.h>

int main(){

    int n; // n de decimales de exactitud
    int j=1; // auxiliar que nos ayuda a guardar solo los valores impares
    int signo; //controlar si suma o resta
    float suma=0; // suma de la formula
    float pi=0;

    printf("ingresa cuantos numeros despues del punto quieres tener: ");
    scanf("%d",&n);

    for(int i = 1; i <= n; i++){
        // controlar el signo de la suma de la sucesion:
        if(i%2) //0=false, 1=true
            signo=1; // i%2=1, por lo que es impar   
        else
            signo=-1;
        
        suma+=1/(float)j*signo;
        // printf("j= %d  | suma= %f\n",j, suma);
        j+=2;
    }
    pi=4*suma;
    printf("el valor de pi es: %f , con %d decimales",pi,n);

    return 0;
}