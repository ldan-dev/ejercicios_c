#include <stdio.h>
#include <string.h>

/*
 * Escribe una función que reciba dos palabras (String) y retorne
 * verdadero o falso (Bool) según sean o no anagramas.
 * - Un Anagrama consiste en formar una palabra reordenando TODAS
 *   las letras de otra palabra inicial.
 * - NO hace falta comprobar que ambas palabras existan.
 * - Dos palabras exactamente iguales no son anagrama.
 *  Por ejemplo, "fresa" y "frase"
 */

int main(){

    char string1[100];
    char string2[100];

    printf("Introduce la primera palabra: ");
    scanf("%s", string1);
    printf("Introduce la segunda palabra: ");
    scanf("%s", string2);

    int len1 = strlen(string1);
    int len2 = strlen(string2);

    if (len1 != len2 || string1 == string2){
        printf("No son anagramas\n");
    }
    else {
        
        int anagrama = 1; // 1 = true, 0 = false
        for (int i = 0; i < len1; i++){

            int found = 0; // 0 = false, 1 = true
            for (int j = 0; j < len2; j++){
                if ( string1[i] == string2[j] ){
                    found = 1;
                    break;
                }
            }
            if (!found){
                anagrama = 0;
                break;
            }
        }

        if (anagrama)
            printf("Son anagramas\n");
        else
            printf("No son anagramas\n");

    }
    

    return 0;
}