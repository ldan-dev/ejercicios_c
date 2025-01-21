#include <stdio.h>
/*
 * Escribe un programa que imprima los 50 primeros números de la sucesión
 * de Fibonacci empezando en 0.
 * - La serie Fibonacci se compone por una sucesión de números en
 *   la que el siguiente siempre es la suma de los dos anteriores.
 *   0, 1, 1, 2, 3, 5, 8, 13...
 * 
 * 0 + 0 = 0    
 * 0 + 1 = 1    i=0
 * 1 + 1 = 2    i=1
 * 1 + 2 = 3    i=2
 * 2 + 3 = 5    i=3
 * 3 + 5 = 8    i=4
 * 5 + 8 = 13   i=5
 */
int main(){

    int a=0, b=1,serie=0,n=0;

    printf("ingrese el numero de elementos de la serie de fibonacci: ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++){
        printf("%d\n",serie);
        serie=b+a;
        a=b;
        b=serie;
    }
    
    return 0;
}