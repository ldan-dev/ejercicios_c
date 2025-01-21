#include <stdio.h>
#define E 2.718281828459045

// importar archivo .c local de nosotros (usar " " en lugar de <>)
#include "modulo.c"

void sumar(int n1, int n2);

// structura: similar a clase
typedef struct Lenguage{
    char* name;
    int year;
} Lenguage;

void descripcion(Lenguage len){
    printf("%s fue creado en %d\n",len.name, len.year);
}

int main(){

    printf("constantes: \n");

    // constante local
    const float pi=3.14;
    printf("pi=%f\n",pi);

    // constante global
    printf("e=%f\n",E);

    printf("\n--operadores logicos--\n \n");
    printf("%d\n", 1 && 1); //1 = TRUE
    printf("%d\n", 1 && 0); //0 = FALSE
    printf("%d\n", 0 && 1); //0 = FALSE
    printf("%d\n", 0 && 0); //0 = FALSE

    printf("%d\n", 1 || 1); //1 = TRUE
    printf("%d\n", 1 || 0); //1 = TRUE
    printf("%d\n", 0 || 1); //1 = TRUE
    printf("%d\n", 0 || 0); //0 = FALSE

    printf("\n-----string----\n \n");

    // string:
    char libro[]="lupin";
    printf("%s \n",libro);

    printf("\n---vectores---\n \n");

    // vectores:
    int nums[]={1,2,3,4};
    printf("%d \n",nums[0]);

    // vector de string debe tener *
    char *animales[]={"perro","gato","machete"};

    printf("%s\n",animales[0]);

    // printf("\n---switch---\n \n");
    // char var = 'A';

    printf("\n---funciones---\n \n");
    sumar(2,3);

    printf("\n---struct---\n \n");

    Lenguage html,css;
    html.name="HTML";
    html.year=1993;

    css.name="CSS";
    css.year=1996;

    descripcion(html);
    descripcion(css);

    printf("\n---modulos---\n \n");
    int resta=restar(10,3);
    printf("resta: %d \n", resta );

    return 0;
}

// funcion
void sumar(int n1, int n2){
    int suma=n1+n2;
    printf("la suma es: %d\n\n",suma) ;
}