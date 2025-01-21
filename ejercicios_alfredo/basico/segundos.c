#include <stdio.h>

/*11. Calcular La cantidad de segundos que están incluidos en eL número de horas,
minutos y segundos ingresados por eL usuario. */

int main(){

    float horas,minutos,segundos;

    printf("\ningrese el numero de horas: ");
    scanf("%f",&horas);

    printf("\ningrese el numero de minutos: ");
    scanf("%f",&minutos);

    printf("\ningrese el numero de segundos: ");
    scanf("%f",&segundos);

    segundos+=horas*3600 + minutos*60;

    printf("\n el numero de segundos es %f \n",segundos);

    return 0;
}