#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[20]="Samuel P. Harbison";
    char str2[20];

    printf("Original String : %s\n", str1);

    strcpy(str2,str1); //str1에 저장된 문자열을 str2에 복사
    printf("New String : %s\n",str2);

    return 0;
}