#include <stdio.h>

int main(){

    int n, num = 1, den = 1;
    float x, exp, sen;

    do{
        printf("Ingrese el valor de x para calcular el arcoseno: ");
        scanf("%f", &x);
    } while (x > 1 || x<-1);

    printf("Con cuantos terminos de la serie quiere calcular el arcoseno de %0.3f: ", x);
    scanf("%d", &n);

    exp = x;
    sen = x;
    for (int i = 1; i < 2*n-1; i++){
        
        exp *= x;

        if(i%2) //true=1 impar
            num *= i;
        else
            den *= i;

        if(i%2 == 0)
            sen += (num*exp)/(den*(i+1));
    }

    printf("arcoseno(%0.3f)=%0.4f", x, sen);
    
    return 0;
}
