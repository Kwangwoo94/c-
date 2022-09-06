#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[30]="Your favorite language is"; //null 문자 포함 27자
    char str2[10];

    fputs("What is your favorite computer language ? : ",stdout);
    fgets(str2,sizeof(str2),stdin);

    strcat(str1,str2);
    printf("생성된 문자열 : %s\n",str1);
    return 0;
}