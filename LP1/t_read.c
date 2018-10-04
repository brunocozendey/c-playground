#include <stdio.h>

main(){
    int c;
    while ((c = getchar()) != EOF){
        c = c + getchar();
    }
    printf("A letra escolhida foi %c \n",c);
}