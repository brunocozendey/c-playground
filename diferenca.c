#include <stdio.h>

int main(){
    int num[3],i;

    for (i=0;i<4;i++){
        scanf("%d",&num[i]);
    }
    printf("DIFERENCA =  %d\n",num[0]*num[1]-num[2]*num[3]);

    return 0;
}