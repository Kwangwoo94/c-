#include <stdio.h>

int main()
{
    char ch=0;

    while (ch!=EOF)
    {
        ch=getchar();
        putchar(ch);
    }

    printf("program 종료\n");

    return 0;
}