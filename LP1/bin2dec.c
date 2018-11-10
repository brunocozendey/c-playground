//Transforma número binário em decimal.

#include <stdio.h>

int main(void){
    int j,i,dec,pot;
    char c;
    i =0;
    dec = 0;
    while ((c = getchar()) != 10){//Lê o caracter até o \n que em decimal é igual a 10
        printf("valor c: %d\n",c);
        pot = 1;
        for (j=0;j<i;j++){
            pot*=2;
        }
        printf("Valor pot: %d\n",pot);
        dec += (c-48)*pot;//0 -48 é para conveter o char para o valor inteiro 0 ou 1;
        printf("Valor dec: %d\n",dec);
        i++;
    }
    printf("%d\n",dec);
    return 0;
}