#include <stdio.h>

char convert(char ch);

int main(void)
{
    char c;

    printf("문자 입력 : ");
    c=getchar();
    c=convert(c);
    if(c==-1)
    {
        printf("잘못된 입력!");
        putchar('\n');
        return -1;
    }
    putchar(c);
    putchar('\n');
    return 0;
}

char convert(char ch)
{
    if(ch>='A'&&ch<='Z')
        return ch+32;
    else if(ch>='a'&&ch<='z')
        return ch-32;
    else
        return -1;
}