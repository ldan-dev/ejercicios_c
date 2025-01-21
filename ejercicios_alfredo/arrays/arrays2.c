#include <stdio.h>

int main(){

    // int array[filas][colum]; filas=Y, colum=X
    int array[3][4]={ {1,2,3,4} ,{5,6,7,8} ,{9,10,11,12} };

    // ciclo para filas:
    for (int i = 0; i < 3; i++){
        // ciclo para columnas:
        for (int j = 0; j < 4; j++){
            printf("%d\t ",array[i][j]);
        }
        printf("\n");
    }
    
    // burbuja
    int vector[] = {2,5,8,4,3,10,9,6,7,1};
    int aux=0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10-i-1; j++) {
            if (vector[j] > vector[j+1]) {
                aux = vector[j];
                vector[j] = vector[j+1];
                vector[j+1] = aux;
            }
        }
    }
        printf("ordenados:\n");

    for (int i = 0; i < 10; i++){
        printf("%d\t",vector[i]);
    }

    return 0;
}