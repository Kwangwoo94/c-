#include <stdio.h>

int main(void)
{
    char arr[26];
    char ch;
    int i;

    for(i=0,ch='A';i<26;i++)
        arr[i]=ch++;
    
    for(i=0;i<26;i++)
        printf("%c",arr[i]);
    
    printf("\n");
    return 0;
}