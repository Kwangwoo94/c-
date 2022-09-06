#include <stdio.h>
#include <string.h>

char* str1="ABCDEFG";
char* str2="ABCdefg";

int main(void)
{
    int result;

    result=strncmp(str1,str2,3); //문자열의 부분적 비교

    if(result==0)
        puts("str1과 str2가 부분적으로 일치!");
    else   
        puts("str1과 str2가 일치하지 않음!");
    
    return 0;
}