/*
 * Crea una única función (importante que sólo sea una) que sea capaz
 * de calcular y retornar el área de un polígono.
 * - La función recibirá por parámetro sólo UN polígono a la vez.
 * - Los polígonos soportados serán Triángulo, Cuadrado y Rectángulo.
 * - Imprime el cálculo del área de un polígono de cada tipo.
 */
#include <stdio.h>
// prototipo
float area(int tipo);

int main(){

    int tipo;
    printf("ingrese el tipo de poligono (0=triangulo,1=cuadrado,2=rectangulo): \n");
    scanf("%d",&tipo);
    printf("el area es: %.3f",area(tipo) );

    return 0;
}

float area(int tipo){

    float altura,base,area=0.0;

    switch (tipo){
    case 0:
        printf("TRIANGULO: \n");
        printf("ingrese la base del poligono : ");
        scanf("%f",&base);
        printf("ingrese la altura del poligono : ");
        scanf("%f",&altura);
        area=base*altura/2;
        break;

    case 1:
        printf("CUADRADO: \n");
        printf("ingrese el lado del cuadrado : ");
        scanf("%f",&base);
        area=base*base;
        break;

    case 2:
        printf("RECTANGULO: \n");
        printf("ingrese la base del poligono : ");
        scanf("%f",&base);
        printf("ingrese la altura del poligono : ");
        scanf("%f",&altura);
        area=base*altura;
        break;
    
    default:
        printf("opcion invalida!\n");
        break;
    }
    return area;
}
