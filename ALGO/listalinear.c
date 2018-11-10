#include <stdio.h>

int main(void){
#define max_N 10;

typedef struct No{
    int chv,elm;
} No;

typedef struct ListaLinear{
    struct No *Val;
    int N;
}ListaLinear;

No N1;
ListaLinear L;



Constroi(L);

return 0;
}

void Constroi(struct No *L){
    L.N = 0;
}
