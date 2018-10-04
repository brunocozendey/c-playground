#include <stdio.h>

int main(void){
    char c='c',*ch;
    short s;
    int i;
    long l;
    long long ll;
    float f;
    double d;
    long double ld;
     
    
    printf("%li \\char\n",sizeof(c));
    printf("%li \\char\n",sizeof('c'));
    printf("%li \\string 15 char\n",sizeof("Teste de string"));
    printf("%li \\string 16 char\n",sizeof("Teste de string1"));
    printf("%li \\string 17 char\n",sizeof("Teste de string12"));
    printf("%li \\string 18 char\n",sizeof("Teste de string123"));
    printf("%li \\string vazia\"\"\n",sizeof(""));
    printf("%li \\string 1 char\n",sizeof("c"));
    printf("%li \\short\n",sizeof(s));
    printf("%li \\inteiro\n",sizeof(i));
    printf("%li \\long\n",sizeof(l));
    printf("%li \\long long\n",sizeof(ll));
    printf("%li \\float\n",sizeof(f));
    printf("%li \\double\n",sizeof(d));
    printf("%li \\long double\n",sizeof(ld));
    printf("%li \\inteiro valor 2\n",sizeof(2));
    printf("%li \\float valor 100e99\n",sizeof(100e99));
    printf("%.1f\n",1.27e99);
    printf("%li \\apontador char\n",sizeof(*ch));
    printf("%c \\apontador char\n",*ch);
    
    //printf("%c\n",'\014');
    return 0;
}
