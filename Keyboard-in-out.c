#include <stdio.h>
/*This program receives Keyboard input and put it as output*/

int main()
{
    int c;
    c = getchar();
    while(c!=EOF){
            putchar(c);
            c=getchar();
    }
    return 0;
}
