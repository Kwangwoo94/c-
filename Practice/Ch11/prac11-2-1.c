#include <stdio.h>

int main(void)
{
    char string[100];
    int len=0;

    printf("문자열 입력 : ");
    scanf("%s",string);

    while (string[len]!=0)
    {
        len++;
    }
    printf("입력한 문자열의 길이는 %d\n",len);
    return 0;
}