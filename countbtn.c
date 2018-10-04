#include <stdio.h>

int main(){
    int blk, tab, nwl,c;
    blk = tab = nwl = 0;
    while (getchar()!= EOF){
        c = getchar();
        if (c ==' ')
            ++blk;
        if (c == '\t')
            ++tab;
        if (c =='\n')
            ++nwl;
    }
    printf("Neste string existem %i brancos, %i tabs e %i linhas\n",blk,tab,nwl);
}