#include <stdio.h>

int count=0;
int multiple(int a,int b);

int main(void)
{
    while (1)
    {
        int a,b;
        printf("두 개의 숫자 입력 : ");
        scanf("%d %d",&a,&b);
        if(a==0&&b==0)
            break;
        printf("연산 결과 : %d\n",multiple(a,b));
    }

    printf("총 %d번 연산하였습니다.\n",count);
    return 0;
}

int multiple(int a,int b)
{
    count++;
    return a*b;
}