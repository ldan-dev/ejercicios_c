//  4. Una pizzería ofrece pizzas vegetarianas y no vegetarianas a sus clientes. Los  ingredientes para cada tipo de pizza aparecen a continuación.- 
//Ingredientes vegetarianos: Pimiento y tofu.- 
//Ingredientes no vegetarianos: Peperoni, Jamón y Salmón.  Escribir un programa que pregunte al usuario si quiere una pizza vegetariana o no, y  en función de su respuesta le muestre un menú con los ingredientes disponibles  para que elija solo uno. Al final se debe mostrar por pantalla si la pizza elegida es  vegetariana o no y todos los ingredientes que lleva 

#include <stdio.h>

int main(){

    int opcion;
    int ingrediente;
    do
    {
    printf("seleccione un tipo de pizza: \n0=vegeteriana\n1=No vegetatiana\n");  
    scanf("%d",&opcion); 
    } while (opcion!=0 && opcion!=1);

    if(opcion==0){

      do{
        printf("seleccione un ingrediente:");
        printf("\n0=Pimiento\n1=tofu\n");
        scanf("%d",&ingrediente);  
        } while (ingrediente!=0 && ingrediente!=1);

        if (ingrediente==0)
            printf("la pizza elijida es vegeteriana con ingrediente: pimiento");
        else
            printf("la pizza elijida es vegeteriana con ingrediente: tofu");

    }else{

        do{
        printf("seleccione un ingrediente:");
        printf("\n0=Peperoni\n1=Jamon\n2=salmon\n");
        scanf("%d",&ingrediente); 
        } while (ingrediente!=0 && ingrediente!=1 && ingrediente!=2);

        switch (ingrediente){
        case 0:
            printf("la pizza elijida es NO vegeteriana con ingrediente: Peperoni");
            break;
        case 1:
            printf("la pizza elijida es NO vegeteriana con ingrediente: Jamon");
            break;
        case 2:
            printf("la pizza elijida es NO vegeteriana con ingrediente: salmon");
            break;
        }

    }


    return 0;
}
