#include <stdio.h>
#include <stdlib.h> //malloc
//Transformar um arquivo de imagem(.pgm) e transformá-lo em ASCII e exibi-lo na tela.

int main(void){
	FILE* FP; //Cria um apontador para o file
	char str[50]; //Coloca o tamanho para o que será escrito pelo scanf
	int *px,*l_row,*l_col;
	int i,row,col;
	px = malloc(sizeof(int));
	l_row = malloc(sizeof(int));
	l_col = malloc(sizeof(int));
	

	if(!(FP = fopen("p2","rb"))){
		printf("Arquivo inexistente.\n"); //Tratativa da função open
		exit(1);
	}
	if (fscanf(FP, "%s", str) == EOF){ 
		printf("Não foi possível ler o arquivo.\n"); //Tratativa da função fscan
		exit(2);
	}
	rewind(FP);
	for (i=0;i<5;i++){ //:Leitura das 4 primeiras linhas do cabeçalho.
		if (i==2){
			fscanf(FP,"%i",l_row); //Verifica o numero de linhas da imagem
			fscanf(FP,"%i",l_col); //verifica o número de colunas
			printf("%d %d",*l_row,*l_col);
		}
		else{
			fgets(str,100,FP);
			printf("%s",str);
		}
		
	}

	for (row=0;row<*l_row;row++){
		for (col=0;col<(*l_col-1);col++){
			fscanf(FP,"%i",px);
			printf("%*x ",3,*px);		
		}
		fscanf(FP,"%i",px);
		printf("%*x\n",3,*px);
	}	 	
	return 0;
}
