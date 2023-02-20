#include <stdio.h>
#include <stdlib.h>

long long int Fat(int n){
    if (n<= 1){
            return 1;
        }
        else return n*Fat(n-1);
}
    
int main(int argc, char *argv[]){
    if (argc == 2) printf("%lli\n",Fat(atoi(argv[1])));    
    else if (argc >2) printf("Coloque apenas 1 argumento");
    else printf("Insira pelo menos 1 argumento");
    return 0;
}