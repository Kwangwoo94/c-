#include <stdio.h>

int main(void)
{
    int sum=0;
    int num=0;
    int i=0;

    while (i<5)
    {
        while (num<=0)
        {
            printf("0보다 큰수를 입력(%d번째) : ",i+1);
            scanf("%d",&num);
        }
        sum+=num;
        num=0;
        i++;
    }
    printf("입력된 값의 총 합 : %d\n",sum);
    return 0;
}