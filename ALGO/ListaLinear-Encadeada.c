#include <stdio.h>
#include <stdlib.h>

typedef struct No{
	int Chave;
	int Elem;
	struct No *Prox;
}No;

typedef struct ListaLinear{
	No * Inicio;
	int N: // Número de elementos da lista
} ListaLinear;

void Constroi(ListaLinear * L){
	(*L).N = 0; //L->N=0;
	L->Inicio = Null;
}

int Busca(ListaLinear * L, int c){
	No * noCorr;
	noCorr = L->Inicio;
	while (noCorr != Null){
		if (noCorr-> Chave == c){
			return noCorr -> Elem;
		} else {
			noCorr = noCorr->Prox;
		
		}
		
			
	}		
	return -1;//Flag para Nulo, não encontrou.
}

void Insere(ListaLinear * L, int c, int x){
	No * novo;
	novo = (No *)malloc(sizeof(No))
	nono -> Chave =c;
	novo -> Elem = x;
	novo -> Prox = L ->Inicio;
	L -> Inicio = novo;
	L -> N = L->N+1;


}


int main(void){
	ListaLinear L:
	Constroi(&L):
	
	Insere(&L, 1,4);
	Insere(&L, 2,2);
	Insere(&L, 3,1);

	int c;
	printf("Entre com uma chave: ");
	scanf("&d",&c);

	return 0;
}
