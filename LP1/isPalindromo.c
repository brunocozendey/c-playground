//U2.3
//Identifica se o string de entrada no terminal é um palíndromo. Respodendo sim ou não.
#include <stdio.h>
#include <string.h> //Biblioteca para usar o strlen()
#include <ctype.h> //Bilioteca para usar  o tolower()

char main(void){
    char string[256];
    unsigned int i,j;
    int palindromo;
    palindromo = 0;
    fgets(string,255,stdin);
    i = 0;
    j = strlen(string)-2;
    while (i < j){
        if (string[i]==' '){
            i++;
        }
        if (string[j]==' '){
            j--;
        }
        if (tolower(string[i]) != tolower(string[j])){ //tolower para não diferenciar o maiusculo da letra minuscula
            return printf("%s","NAO\n");
        }
        i++;
        j--;
    }
    return printf("%s","SIM\n");
}