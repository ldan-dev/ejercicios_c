#include <stdio.h>
#include <ctype.h>
/*
    Proyecto Final. Fundamentos de los Sistemas de la Información
    Equipo 1
    Leonardo Daniel Aviña Neri
    Alan Castro Martinez
    Jorge Luis Ramirez Ramirez

    P3: Desarrollar un programa que realice tareas con arreglos y cadenas

     El programa debe preguntar al usuario si quiere realizar una tarea con arreglos o con cadenas.
     Si el usuario elige arreglos, debe preguntarle cuantos elementos tiene el arreglo (maximo 10) y pedirle que ingrese los valores uno a uno. Cuando termine de ingresarlos, el programa debe mostrar en la pantalla el valor mas grande del arreglo, el valor mas pequeño y el promedio de todos los elementos
     Si el usuario elige cadenas, debe pedirle que ingrese la cadena y despues mostrar en la pantalla la cantidad de caracteres que tiene y cuantas vocales tiene (usar fgets() )
*/

int main(){

    int opcion=0,n=0;

    do{
        printf("Seleccione una opcion:\n 0=trabajar con arreglos \n 1=trabajar con cadenas \nopcion: ");
        scanf("%d",&opcion);
    } while (opcion!=0 && opcion!=1);
    
    if (opcion){ //opcion=1 (true)

        char cadena[100];
        int vocales=0,caracteres=0;
        printf("\n--- CADENAS ---\n");
        printf("ingrese la cadena: ");
        // fgets(cadena,longitud, stdin);
        getchar();
        fgets(cadena,100, stdin);

        // '\0' es el ultimo valor en una cadena de caracteres
        int i=0;
        while (cadena[i]!='\0'){
            if (cadena[i] == '\n') {
                    break;
                }

            // con tolower convertimos a minuscula el caracter en la posicon
            if (tolower(cadena[i])=='a' || tolower(cadena[i])=='e' 
                || tolower(cadena[i])=='i' || tolower(cadena[i])=='o'
                || tolower(cadena[i])=='u' )
                    vocales++;
            
            // ignorar los espacios al hacer el conteo de caracteres
            if( cadena[i]!=' ')
                caracteres++;
            i++;
        } 
        
        printf("la cadena %s tiene: %d vocales y %d caracteres (sin contar espacios) \n",cadena,vocales,caracteres);

    }else{
        printf("\n--- ARREGLOS ---\n");
        do{
            printf("ingrese el numero de elementos: ");
            scanf("%d",&n);
        } while (n<=0 || n>10);
        
        float vector[n], aux=0,max,min,prom=0;

        // llenar vector
        printf("Llene el vector: \n");
        for (int i = 0; i < n; i++){
            printf("[%d]: ",(i+1));
            scanf("%f",&vector[i]);
            prom+=vector[i];
        }

        //ordenarlo por el metodo burbuja:
        for (int i = 0; i < n-1; i++) {
            for (int j = 0; j < n-i-1; j++) {
                if (vector[j] > vector[j+1]) {
                    aux = vector[j];
                    vector[j] = vector[j+1];
                    vector[j+1] = aux;
                }
            }
        }
        
        // guardar el menor, mayor y dividir el promedio entre el numero de elementos
        min=vector[0];
        max=vector[n-1];
        prom/=n;

        printf("\nValor minimo: %.3f",min); 
        printf("\nValor maximo: %.3f",max); 
        printf("\nPromedio: %.3f",prom); 

        printf("\nVector ordenado:\n"); 
        for (int i = 0; i < n; i++){
            printf("%.3f \t",vector[i] );
        }

    
    }
    
    return 0;
}