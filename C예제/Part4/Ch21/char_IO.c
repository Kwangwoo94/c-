#include <stdio.h>

int main()
{
    char ch=0;

    while (ch!='q')
    {
        ch=getchar(); //fgetc(stdin)와 같다.
        putchar(ch); //fputc(ch, stdout)와 같다.
    }
    return 0;    
}