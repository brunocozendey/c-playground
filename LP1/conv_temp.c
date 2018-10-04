#include <stdio.h>

/* Comentarioos pertinenstes*/

main(){
    float fahr, celsius;     
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Temp F | Temp C \n");
    while (fahr <= upper) {
        celsius = (5.0/9.0)*(fahr-32);

        printf("%3.2f \t %3.2f \n",fahr,celsius);
        fahr = fahr + step;
    }
}