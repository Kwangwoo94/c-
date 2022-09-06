#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[20]="Samuel P. Harbison";
    char str2[10];

    printf("Original String : %s\n",str1);

    strncpy(str2,str1,sizeof(str2)-1);
    str2[sizeof(str2)-1]='\0'; //null 문자 추가

    printf("New String : %s\n",str2);

    return 0;
}