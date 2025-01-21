#include <stdio.h>
#define N_ALUMN 5
#define N_CAL 3
/*
    Proyecto Final. Fundamentos de los Sistemas de la Información
    Equipo 1
    Leonardo Daniel Aviña Neri
    Alan Castro Martinez
    Jorge Luis Ramirez Ramirez

    P2:Desarrollar un programa que gestione las calificaciones de un grupo de cinco estudiantes

    El programa debe permitir al usuario ingresar el nombre de cada estudiante y sus calificaciones en tres materias.
    Despues de ingresar la informacion de todos los estudiantes, el programa debe calcular el programa de cada uno de los estudiantes.
    Al final el programa debe mostrar una lista con el nombre del estudiante, su promedio y si este aprueba o reprueba segun su promedio. El promedio debe ser mayor o igual a 7 para aprobar
*/

int main(){

    char nombres[N_ALUMN][100]; // array de los nombres
    float calif[N_ALUMN][N_CAL]; // filasXcolumnas / alumnosXcalif
    float promedios[5]={0}; // array de los promedios
    char* mensaje; // variable para decir aprobo o reprobo

    for (int i = 0; i < N_ALUMN; i++){
        printf("%d.-ingresa el nombre: ",(i+1));
        scanf("%s",nombres[i]);
        printf("Alumno: %s\n",nombres[i]);

        for (int j = 0; j < N_CAL; j++){
            printf(" calif %d: ",(j+1) );
            scanf("%f",&calif[i][j] );
            promedios[i]+=calif[i][j];
            // printf("%f\t",calif[i][j] );
        }
        promedios[i]/=N_CAL;
    }

    printf("\nNombre \t Promedio \t Estado\n");
    for (int i = 0; i < N_ALUMN; i++){

        if(promedios[i]>=7)
            mensaje="aprobo";
        else
            mensaje="reprobo";

        printf("%s \t %.3f \t %s \n",nombres[i],promedios[i],mensaje);
    }
    
    return 0;
}

// typedef struct Alumno{
//     char* nombre;
//     float califs[N_CAL];
//     float promedio;
// }Alumno;