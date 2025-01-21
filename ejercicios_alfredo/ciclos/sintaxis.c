#include <stdio.h>

int main() {

    int i = 0,n=0,suma=0, signo=0; //signo=0 ->positivo
    do {
        i += 2;
        printf("%d ",i); 
    } while (i < 10);
    printf("\n%d\n",i); // 10

    // suma de los primeros n numeros
    printf("\n suma de los primeros n numeros: \n"); 
    i=1;
    printf("ingrese n: "); 
    scanf("%d",&n);
    while (i<=n){
        suma+=i;
        i++;
    }
    printf("\nsuma=%d\n",suma); 

    // Sumar 1-2+3-4... n
    printf("\nSumar 1-2+3-4... n: \n"); 
    printf("ingrese n: "); 
    scanf("%d",&n);
    i=1,suma=0;
    while (i<=n){
        if (signo%2==0) //positivo
            suma+=i;
        else
            suma-=i;
        i++;
        signo++;
    }
    printf("\nsuma=%d\n",suma); 
    
    printf("\ntriangulo rectangulo de *:\n");
    printf("ingrese n: "); 
    scanf("%d",&n);
    for (int i = 0; i <= n; i++){

        for (int j = 0; j < i; j++){
            printf("*");
        }
            printf("\n");
    }
    
    printf("\n 'arbol' de *:\n");
    printf("ingrese n: "); 
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n factorial de n:\n");
    printf("ingrese n: "); 
    scanf("%d",&n);
    int fact=1;
    for (int i = 1; i <= n; i++){
        fact*=i;
    }
    printf("\n%d!=%d\n",n,fact); 
    
    // Hacer un programa que calcule la suma de factoriales
    printf("\nla suma de n factoriales: \n");
    printf("ingrese n: "); 
    scanf("%d",&n);
    fact=1,suma=0;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            fact*=j;
        }
        printf("\n%d!=%d\n",i,fact); 
        suma+=fact;
        fact=1;
    }
    suma++; //porque !0=1
    printf("\nsuma de n factoriales=%d\n",suma); 

    printf("\nalfabeto:\n ");
    char letra='a';
    do{
        printf("%c ",letra);
        letra++;
    } while (letra<='z');
    
    printf("\n\nalrevez:\n");
    letra='z';
    do{
        printf("%c ",letra);
        letra--;
    } while (letra>='a');

    i=0;
    for (i = 0; i < 5; ++i) {
        printf("%d ", i);
    }

    int x = 3, y = 2;
    x *= y + 1;
    printf("\n%d", x);
    return 0;

    int _var=1230;
    printf("\n%d", _var);
}