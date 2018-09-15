#include <stdio.h>

main(){
    int c,i;
    c = getchar();
    i=0;
    while (getchar() != EOF )
        ++i;
    printf("Hello World %i",i);
}