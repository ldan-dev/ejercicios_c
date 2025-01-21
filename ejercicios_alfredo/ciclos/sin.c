#include <stdio.h>

int main(){

    int n=0,signo=1,num=1,den=1,aux=0;
    float x,seno=0;

    printf("ingrese el valor a calcular  ( seno(x) ), x=");
    scanf("%f",&x);

    do{
        printf("ingrese el valor de exactitud (n): ");
        scanf("%d",&n);
    } while (n<=0);

    for (int i = 1; i <= 2*n-1; i++){
        num*=x;
        den*=i;
        
        if(i%2==1){
            // printf("%d / %d *%d\n",num,den,signo);
            signo=(aux%2)? -1:1;
            seno+=(float)signo*num/den;
            aux++;
        }
        
    }
    printf("sen(%.3f)=%f\n",x,seno);

    return 0;
}