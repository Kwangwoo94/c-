#include <stdio.h>

int main(void)
{
    int n = 0;
    int i = 0;
    char str[] = "123456";
    for(i=0;str[i]!=0;i++)
    {
        n = n * 10 + str[i] - '0';
    }

    printf("Number = %d",n);
    return 0;   
}