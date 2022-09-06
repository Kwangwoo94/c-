#include <stdio.h>
#include <string.h>

int conv_int(char c);

int main(void)
{
    char string[50];
    int len,i;
    int total=0;
    printf("문자열 입력 : ");
    fgets(string,sizeof(string),stdin);
    len=strlen(string);

    for(i=0;i<len;i++)
    {
        if(48<=string[i]&&string[i]<=57)
            total+=conv_int(string[i]);
    }
    printf("숫자의 총 합 : %d",total);
    return 0;
}

int conv_int(char c)
{
    return c-48;
}