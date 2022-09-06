#include <stdio.h>

int main(void)
{
    char string[100];
    int len=0,i;

    printf("문자열 입력 : ");
    scanf("%s",string);

    while(string[len]!='\0')
        len++;
    
    for(i=0;i<len/2;i++)
    {
        char temp=string[i];
        string[i]=string[len-i-1];
        string[len-i-1]=temp;
    }
    printf("변경된 문자열 : %s\n",string);
    return 0;
}