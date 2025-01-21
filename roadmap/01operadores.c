#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){

    for (int i = 10; i <= 55; i++){
        if (i%2==0 && i!=16 && i%3!=0)
            printf("%d \t",i);
    }
    printf("\n\n");

    // int i;
    // for (i = 1; i <= 10; i++){
    //     printf("%d \t",i);
    // }

    // printf("\ni= %d\n",i); // i=11
    
    int n = 5,i=1;
    for (i = 1; i < 2*n-1; i++) {
        printf("%d ", i);
    }
    printf("\ni= %d\n",i); // i=9

    int x = 5, y = 10, z = 15;
    x = y + z * x / 5;
    printf("%d\n", x);

    // nunca se ejecuta debido que i <= 0 nunca se cumple, tiene que ser i >= 0 para imprimir de 10 a 0
    for (int i = 10; i <= 0; i--) {
        printf("%d ", i);
    }

    // ¿Qué imprime el programa?
    // a) 1 1 2 3
    // b) 1 2 3 5 -> correcta
    // c) 1 1 3 5
    // d) 1 2 3 4
    int a = 0, b = 1, c;
    for (int i = 0; i < 4; i++) {
        c = a + b;
        a = b;
        b = c;
        printf("%d \n", c);
    }

    x = 10;
    printf("x++: %d\n", x++); // 10
    printf("x: %d\n", x); // 11
    printf("++x: %d\n", ++x); // 12
    printf("x: %d\n", x); // 12

    // operador terneario

    // int terneario= x == 11 ? si es true: si es false;
    int terneario= x == 11 ? 1: 0;
    if (terneario)
        printf("%d es 11 \n", x);
    else
        printf("%d NO es 11 \n", x);


    printf("\nwhile(x--): \n");
    x = 5;
    while (x--) {
        printf("%d ", x);
    }

    printf("\nsizeof('A')=%d\n", sizeof('A'));

    // int basura;
    // printf("\nbasura=%d\n",basura);

    printf("\nfor (int i = 0; i < 10; i += 3)\n");
    for (int i = 0; i < 10; i += 3) {
        printf("%d ", i);
    }

    // leer con gets
    char nombre[50],carrera[20];

    printf("\ningresa tu nombre: ");
    gets(nombre);
    printf("ingresa tu carrera: ");
    gets(carrera);

    if (strcmp(carrera,"lidia")==0 ){
        printf("\nexcelente la carrera de %s \n",carrera);
    }
    else if (strcmp(carrera,"administracion")==0 || strcmp(carrera,"artes")==0) {
        printf("\njaja, ese werco no es inge, es de %s \n",carrera);
    }else{
        printf("\n no esta mal la carrera de %s \n",carrera);
    }

    // Cambiar un número entero con eL mismo valor pero en romanos.
    int unidades,decenas,centenas,miles;
    printf("ingresa un numero: ");
    scanf("%d",&n);
    unidades=n%10;
    decenas=(n%100-unidades)/10;
    centenas=(n%1000-decenas-unidades)/100;
    miles=(n%10000-centenas-decenas-unidades)/1000;
    // printf("\n u: %d",unidades);
    // printf("\ndecenas: %d",decenas);
    // printf("\n centenas: %d",centenas);
    // printf("\n miles: %d",miles);

    printf("\nel numero en romano es: ");
    switch (miles){
        case 1:  printf("M");  break;
        case 2:  printf("MM");  break;
        case 3:  printf("MMM");  break;
    }

    switch (centenas){
    case 1:  printf("C");  break;
    case 2:  printf("CC");  break;
    case 3:  printf("CCC");  break;
    case 4:  printf("CD");  break;
    case 5:  printf("D");  break;
    case 6:  printf("DC");  break;
    case 7:  printf("DCC");  break;
    case 8:  printf("DCCC");  break;
    case 9:  printf("CM");  break;
    }

    switch (decenas){
    case 1:  printf("X");  break;
    case 2:  printf("XX");  break;
    case 3:  printf("XXX");  break;
    case 4:  printf("XL");  break;
    case 5:  printf("L");  break;
    case 6:  printf("LX");  break;
    case 7:  printf("LXX");  break;
    case 8:  printf("LXXX");  break;
    case 9:  printf("XC");  break;
    }

    switch (unidades){
    case 1:  printf("I");  break;
    case 2:  printf("II");  break;
    case 3:  printf("III");  break;
    case 4:  printf("IV");  break;
    case 5:  printf("V");  break;
    case 6:  printf("VI");  break;
    case 7:  printf("VII");  break;
    case 8:  printf("VIII");  break;
    case 9:  printf("XI");  break;
    }
    

    return 0;
}

/*
 * EJERCICIO:
 * - Crea ejemplos utilizando todos los tipos de operadores de tu lenguaje:
 *   Aritméticos, lógicos, de comparación, asignación, identidad, pertenencia, bits...
 *   (Ten en cuenta que cada lenguaje puede poseer unos diferentes)
 * - Utilizando las operaciones con operadores que tú quieras, crea ejemplos
 *   que representen todos los tipos de estructuras de control que existan
 *   en tu lenguaje:
 *   Condicionales, iterativas, excepciones...
 * - Debes hacer print por consola del resultado de todos los ejemplos.
 *
 * DIFICULTAD EXTRA (opcional):
 * Crea un programa que imprima por consola todos los números comprendidos
 * entre 10 y 55 (incluidos), pares, y que no son ni el 16 ni múltiplos de 3.
 *
 * Seguro que al revisar detenidamente las posibilidades has descubierto algo nuevo.
 */