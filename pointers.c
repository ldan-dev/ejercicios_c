/*
LEONARDO DANIEL AVIÑA NERI
Fecha: 15/01/2025

Advantages of Using Pointers
    Less time in program execution.
    Working on the original variable.
    With the help of pointers, we can create data structures (linked-list, stack, queue).
    Returning more than one values from functions.
    Searching and sorting large data very easily.
    Dynamically memory allocation.
*/

#include <stdio.h>

void printAge(int *pAge){
    printf("your age is %d\n",*pAge); // dereference
}

int main() {
    
    int age = 21;
    // int *pAge = &age; // adress to age
    int *pAge = NULL; // good practice
    pAge = &age; // adress to agemaster had recent pushes 1 minute ago

    // printf("adress of age=%p\n",&age);
    // printf("value pAge=%p\n",&pAge);

    // printf("value of age=%d\n",age); // 21
    // printf("value stored at address=%d\n",*pAge); // 21
    
    // printf("size of age: %d bytes \n",sizeof(age)); // 4 bytes
    // printf("size of pAge: %d bytes \n",sizeof(pAge)); // 8 bytes
    
    printAge(pAge);

    return 0;
}