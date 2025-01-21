#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    Proyecto Final. Fundamentos de los Sistemas de la Información
    Equipo 1
    Leonardo Daniel Aviña Neri
    Alan Castro Martinez
    Jorge Luis Ramirez Ramirez

    P1:Desarrollar un juego en donde el usuario debe adivinar un numero entre 0  y 100 generado aleatoriamente por el programa
*/

int main(){

int intentos=0,num=-1,aleatorio;

// generar una diferente "semilla" para que cada vez que se ejecute el programa sea un aleatorio diferente
srand(time(NULL));
aleatorio = rand() % 101;

    // ciclo del juego
    do{
        printf("adivina el numero: ");
        scanf("%d",&num);
        intentos++;   

        if (num>aleatorio)
            printf("el numero debe ser menor \n ");
        else if(num<aleatorio)
            printf("el numero debe ser mayor \n ");

    } while ( aleatorio!=num );
    
    printf("Ganaste!\n con %d intentos\n",intentos);

    return 0;
}