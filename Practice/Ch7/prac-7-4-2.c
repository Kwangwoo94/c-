#include <stdio.h>

int main(void)
{
    int n,i;
    int result;

    for (;;)
    {
        printf("팩토리얼 계산을 위한 정수 입력 : ");
        scanf("%d",&n);

        for (i=1,result=1;i<=n;i++)
        {
            result=result*i;
        }
        printf("%d의 팩토리얼 : %d\n",n,result);
    }
    return 0;
}