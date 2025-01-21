#include <stdio.h>

void burbuja(int vector[], int n); 
void imprimir(int vector[], int size);
void llenar(int vector[], int size);

int main(){

    int n;

    printf("ingresa el numero de elementos: ");
    scanf("%d",&n);

    int vector[n];

    llenar(vector, n);

    // ordenar
    burbuja(vector,n);
    
    printf("vector ordeado: \n");
    imprimir(vector, n);

    return 0;
}

void burbuja(int vector[], int n){
    int aux=0;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (vector[j] > vector[j+1]) {
                aux = vector[j];
                vector[j] = vector[j+1];
                vector[j+1] = aux;
            }
        }
    }
} 

void imprimir(int vector[], int n){
    for (int i = 0; i < n; i++){
        printf("%d \t",vector[i] );
    }
} 

void llenar(int vector[], int n){
    printf("\ningresa los elementos: \n");
    for (int i = 0; i < n; i++){
        printf("[%d] : ",i );
        scanf("%d",&vector[i]);
    }
} 

