#include <stdio.h>

int main(){
    int blk, tab, nwl,c,out;
    blk = tab = nwl = 0;
    while ((c = getchar()) != EOF){
        if (c ==' ')
            c = '\\ \\b';
        if (c == '\t')
            c = '\t';
        if (c =='\\')
            c = '\\';
        putchar(c);
    }
    //printf("%i",out);
}