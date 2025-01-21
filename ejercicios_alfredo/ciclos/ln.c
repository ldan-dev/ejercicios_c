// AVIÑA NERI LEONARDO DANIEL
#include <stdio.h>

int main(){
    int n; // n=exactitud
    float x,serie=0, ln=0,fracion = 1; //x=valor a calcular

    do{
        printf("ingrese el valor a calcular ln(x): ");
        scanf("%f",&x);
    } while (x<=0);
    
    do{
        printf("ingrese el valor de exactitud (n): ");
        scanf("%d",&n);
    } while (n<=0);

    for (int i = 1; i < 2*n-1; i++){ //i < 2*n-1 pa q sea impar y el ultimo sea por ejemplo n=3 -> 2*3-1=5 que es ultimo exponente de la fraccion   
        fracion*=(float)(x-1)/(x+1);

        if (i%2) //si es impar
            serie+=(1.0/i)*fracion;

    }
    ln=2*serie;
    printf("ln(%.3f)=%f",x,ln);

    return 0;
}
