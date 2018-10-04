#include <stdio.h>
#include <stdlib.h> //Bibliote necessária para usar o malloc.

int main(){
    int *x,z,**y;
    x = (int *) malloc(sizeof(int)); //Alocar o espaço de memória para o pointer

    *x = 1; //Neste caso desloca até o espaço de memória de x, isto é, x^ e escreve 1 neste espaço.
    printf("%p\n",x);
    printf("%d\n",*x);

    z = 10; 
    printf("%d \n",z);

    x = &z; // x Passa apontar para o endereço de z
    printf("%d %d %p %p %p\n",z,*x,x,&z,&x);
    *x = 2;

    printf("%d\n",z);

    y = &x;

    printf("%p %p %d %p\n",y,*y,**y,&y);

    //free(x); // Libera o espaço na memória, esse comando estava apresentando um erro que náo conseguia liberar a memória depois que eu colocava o ponteiro apontado para o endereço de variavel inteira
    //free(y);
    return 0;
}
