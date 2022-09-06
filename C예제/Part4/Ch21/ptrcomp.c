#include <stdio.h>
#include <string.h>

char* str1="Hello!"; //문자열 길이 7

int main(void)
{
    char str2[7];
    strcpy(str2,str1); //문자열 복사

    printf("str1 : %s\n",str1);
    printf("str2 : %s\n",str2);

    if(str1==str2) //포인터 비교
        printf("str1과 str2는 같습니다.\n");

    return 0;
}