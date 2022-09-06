#include <stdio.h>

int main(void)
{
    int val;
    printf("정수를 하나 입력하세요 : ");
    scanf("%d",&val);

    if(val<0)
        printf("입력값은 0보다 작다 \n");
    else 
    {
        if(val>0)
            printf("입력값은 0보다 크다 \n");
        else
            printf("입력값은 0이다 \n");
    }
    return 0;
}