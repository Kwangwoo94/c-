#include <stdio.h>

int main(void)
{
    int num;
    int i=0;

    printf("숫자 입력 : ");
    scanf("%d",&num);

    while(i<num)
        printf("Hello World!\n"),i++;
    
    return 0;
}