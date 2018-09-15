#include <stdio.h>
/* This Program convert Celsius to Farenheit*/

main(){
    float celsius;
    int i;
    for (i = 0; celsius <= 100; celsius = celsius + 20 )
        printf("%3.2f \t %3.2f\n",celsius, celsius*(9.0/5.0)+32);    
}