#include <stdio.h>
#include <math.h>

/*
 * Escribe un programa que se encargue de comprobar si un numero es o no primo.
 * Hecho esto, imprime los numeros primos entre 1 y 100.
 */

int primo(int n);

int main(){
    
    int n;
    printf("ingrese el numero el cual quiere saber si es primo: ");
    scanf("%d",&n);
    if (primo(n))
        printf("el numero: %d es primo \n",n);
    else
        printf("el numero: %d NO es primo \n",n);
    

    printf("Los numeros primos entre 1 y 100: \n");
    for (int i = 1; i < 100; i++){
        if ( primo(i) )
            printf("%d, ",i);
    }
    
    return 0;
}

int primo(int n){
    // 1=true, 0=false
    if (n<=1)
        return 0;
    else if(n==2)
        return 1;
    else if ( n%2==0 && n>2 )
        return 0;
    
    for (int i = 3; i <= sqrt(n); i+=2){
        if (n%i==0)
            return 0;
    }
        
    return 1;
}