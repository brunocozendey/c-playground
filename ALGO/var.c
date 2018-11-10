#include <stdio.h>
#include <stdlib.h> //Usar malloc - aloca ponteiros
#include <stdbool.h> // Precisa desta biblioteca para declarar a variável como boleana.


int calc(void){ //Manipula contas
    int x=2,y;
    float z;

    y=x+y;
    z=x/y;
    printf("y = %d, z = %f",y,z);
    return 0;
}

int EstAluno(void){ //Cria e exibe uma estrutura de aluno.
    typedef struct Aluno{
        int Matricula;
        char *Nome; // Foi a forma que encontrei para escrever em um char uma string. Colocando como ponteiro.
        char *DataNasc;
        char *Endereco;
        bool Formado;
        float CR;
    } Aluno;

    Aluno a;
    a.Matricula = 123456;
    a.Nome = "Bruno Cozendey";
    a.DataNasc = "30/01/1990";
    a.Endereco = "Rua Alvaro Ramos, 45 apt 201";
    a.Formado = true;
    a.CR = 7.5;

    printf("Matricula: %d \nCR:%f.2 \nNome: %s\nData Nasc.: %s\nEndereco: %s\n",a.Matricula, a.CR, a.Nome, a.DataNasc, a.Endereco);
    return 0;
}

int EstEnd(void){ //Cria uma estrutura de endereço
    typedef struct Endereco{
        char* Rua;
        int Num;
        char* Comp;
        int Cep;
    }Endereco;

    Endereco End;
    End.Rua = "Rua Álvaro Ramos";
    End.Num = 45;
    End.Comp = "Apt 201";
    End.Cep = 22280110; 

    printf ("Endereço completo: %s,%d,%s - CEP:%d\n",End.Rua,End.Num,End.Comp,End.Cep);
    return 0;
}


int EstCont(void){ //Cria um estrutura de contato, com a estrutura de endereço dentro.
    typedef struct Endereco{
        char* Rua;
        int Num;
        char* Comp;
        int Cep;
    }Endereco;
    
    typedef struct Contato{
        char* Nome;
        char* Mail;
        Endereco ECom;
        Endereco ERes;
    } Contato;

    Contato c1;
    c1.Nome = "Bruno Cozendey";
    c1.Mail = "brunocozendey@gmail.com";
    c1.ECom.Rua = "Rua Pacheco Leão";
    c1.ECom.Num = 70;
    c1.ERes.Rua = "Rua Álvaro Ramos";
    c1.ERes.Num = 45;
    c1.ERes.Comp = "Apt 201";
    printf("%s\n%s\n%s\n%d\n%s\n%d\n%s\n",c1.Nome,c1.Mail,c1.ECom.Rua,c1.ECom.Num,c1.ERes.Rua,c1.ERes.Num,c1.ERes.Comp);
    return 0;
}

int Matx(void){ //Manipular elementos de uma matriz
    int x[3][3];
    int i,j;
    x[1][1] = 1;
    x[1][2] = 2;
    x[2][1] = x[1][1]+x[1][2];
    x[2][2] = x[1][2]+x[2][1]+x[1][1];    
    for (i=1;i<3;i++){
        for (j=1;j<3;j++){
            printf("%d   ",x[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int ContatoVetor(void){//Escrever um algoritmo que armazene 3 contatos em um vetor. Usar definição existente de estrutura de Contato.
    int i;
    typedef struct Endereco{
        char* Rua;
        int Num;
        char* Comp;
        int Cep;
    }Endereco;
    
    typedef struct Contato{
        char* Nome;
        char* Mail;
        Endereco ECom;
        Endereco ERes;
    } Contato;

    Contato VetContato[4];
    VetContato[1].Nome = "Teste";
    VetContato[1].Mail = "Teste";
    VetContato[1].ECom.Rua = "Rua do Teste";
    VetContato[2].Nome = "Teste2";
    VetContato[2].Mail = "Teste2";
    VetContato[2].ECom.Rua = "Rua do Teste2";
    VetContato[3].Nome = "Teste3";
    VetContato[3].Mail = "Teste3";
    VetContato[3].ECom.Rua = "Rua do Teste3";
    for (i=1;i<4;i++){
        printf("%s, %s, %s \n",VetContato[i].Nome,VetContato[i].Mail,VetContato[i].ECom.Rua);
    }
    printf("Tamanho variavel: %lu\n",sizeof(VetContato)); //O LU retorna um Unsigned Long
    return 0;
}

int Ponteiros(void){//Manipular ponteiros
    int *p,i;
    p = (int *) malloc(sizeof(int)); //Aloca espaço de um inteiro no ponteiro p;
    i = 2;
    p = &i; //O apontador p aponta para a memória da variável i
    printf("p=%d, i=%d \n",*p,i); // Retorna o valor que está alocado na memória apontada por p
    *p = *p + 3;
    printf("p=%d, i=%d \n",*p,i); //5,5 
    return 0;
}

int VetPonteiros(void){/*Escrever um algoritmo que armazene 3 contatos em um vetor, no qual cada
elemento é um ponteiro para um contato. Usar definição existente de estrutura de Contato.*/
    int i;
    typedef struct Endereco{
        char* Rua;
        int Num;
        char* Comp;
        int Cep;
    }Endereco;
    
    typedef struct Contato{
        char* Nome;
        char* Mail;
        Endereco ECom;
        Endereco ERes;
    } Contato;

    Contato c1;
    c1.Nome = "Bruno Cozendey";
    c1.Mail = "brunocozendey@gmail.com";
    c1.ECom.Rua = "Rua Pacheco Leão";
    c1.ECom.Num = 70;
    c1.ERes.Rua = "Rua Álvaro Ramos";
    c1.ERes.Num = 45;
    c1.ERes.Comp = "Apt 201";

    Contato c2;
    c2.Nome = "Teste 2";
    c2.Mail = "Teste2@gmail.com";
    c2.ECom.Rua = "Teste Comercial";
    c2.ECom.Num = 2;
    c2.ERes.Rua = "Teste 2 Residencial";
    c2.ERes.Num = 2;
    c2.ERes.Comp = "Teste 2";

    Contato c3;
    c3.Nome = "Teste 3";
    c3.Mail = "Teste3@gmail.com";
    c3.ECom.Rua = "Teste 3 Comercial";
    c3.ECom.Num = 3;
    c3.ERes.Rua = "Teste 3 Residencial";
    c3.ERes.Num = 3;
    c3.ERes.Comp = "Teste 3";

    Contato VetContato[4];
    Contato *p1,*p2,*p3;
    p1 = (Contato *) malloc(sizeof(Contato));
    p2 = (Contato *) malloc(sizeof(Contato));
    p3 = (Contato *) malloc(sizeof(Contato));
    (*p1).Nome = "Bruno Cozendey"; //Para alocar algo dentro da estrutura apontada por p, é necessário colocar o apontodar entre ()
    (*p1).Mail = "brunocozendey@gmail.com";
    (*p1).ECom.Rua = "Rua Álvaro Ramos, 45";

    (*p2).Nome = "Teste 2"; //Para alocar algo dentro da estrutura apontada por p, é necessário colocar o apontodar entre ()
    (*p2).Mail = "Teste2@gmail.com";
    (*p2).ECom.Rua = "Teste, 2";

    (*p3).Nome = "Teste 3"; //Para alocar algo dentro da estrutura apontada por p, é necessário colocar o apontodar entre ()
    (*p3).Mail = "Teste3@gmail.com";
    (*p3).ECom.Rua = "Teste, 3";

    VetContato[1] = *p1; //A posição do Vetor 1 pega o que estiver no apontador 1
    VetContato[2] = *p2;
    VetContato[3] = *p3;
    printf("%s %s %s \n",VetContato[1].Nome,VetContato[1].Mail, VetContato[1].ECom.Rua);
    printf("%s %s %s \n",VetContato[2].Nome,VetContato[2].Mail, VetContato[2].ECom.Rua);
    printf("%s %s %s \n",VetContato[3].Nome,VetContato[3].Mail, VetContato[3].ECom.Rua);    
    return 0;
}

int CalculaDobro(int x){//Calcula o dobro de x por parâmetro, cria uma cópia da entrada não modificando-a.
    x = x*2;
    return x;
}

int CalculaDobroRef(int *x){//Calcula o dobro de x por Referencia, isto é, modifica a entrada.
    *x = *x*2;
    return *x;
}

int TesteRef(void){
     int y =2;
    printf("%d \n",CalculaDobro(y)); //4
    printf("%d \n",y); //2
    printf("%d \n",CalculaDobroRef(&y)); //4
    printf("%d \n",y); //4
    return 0;
}


int main(void){
    TesteRef();
    return 0;
}

