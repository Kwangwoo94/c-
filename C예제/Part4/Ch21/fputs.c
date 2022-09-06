#include <stdio.h>

int main(void)
{
    char str[10];

    fputs("문자열을 입력하세요 : ",stdout);
    fgets(str,sizeof(str),stdin);

    fputs("입력된 문자열 : ",stdout);
    fputs(str, stdout);

    return 0;
}