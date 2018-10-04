#include <stdio.h>

int main(){
    char nome[100];
    double salario,bonus;

    scanf("%s",nome); //Declarar como string se colocar como char ele termina o programa.
    scanf("%lf",&salario); //lf pois é double = long float e tive que declarar como & mas não entendi.
    scanf("%lf",&bonus);
    printf("TOTAL = R$ %.2f \n",salario+0.15*bonus); //o %.2f coloca com duas casa decimais

    return 0;

}