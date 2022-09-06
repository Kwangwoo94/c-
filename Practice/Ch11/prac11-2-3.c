#include <stdio.h>

int main(void)
{
    char string[100];
    int len=0,i;
    char big_ch=0;

    printf("문자열 입력 : ");
    scanf("%s",string);

    for(i=0;string[i]!='\0';i++)
    {
        if(big_ch<string[i])
            big_ch=string[i];
    }

    printf("아스키 코드값이 가장 큰 문제 : %c\n",big_ch);
    return 0;
}