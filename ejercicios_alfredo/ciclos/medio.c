// AVIÑA NERI LEONARDO DANIEL
#include <stdio.h>

int main(){

    int n;//numero de exactitud
    float suma=0,termino=0;

    printf("ingresa el numero de exactitud: ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++) {
        // denominadores: 1, 3, 5, 7, ...
        int num1 = 2 * i + 1;    // Primer número impar
        int num2 = num1 + 2;     // Segundo número impar

        termino = 1.0 / (num1 * num2);

        suma += termino;
    }

    // Imprimir el resultado
    printf("El valor aproximado de 1/2 es: %lf\n", suma);

    return 0;
}