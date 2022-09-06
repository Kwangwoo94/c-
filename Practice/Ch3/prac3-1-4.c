#include <stdio.h>

int main(void)
{
    int a,b;
    int rem;
    printf("두 개의 정수 입력 : ");
    scanf("%d %d",&a,&b);

    rem=a%b;
    printf("%d를 %d 로 나누는 경우의 나머지 : %d\n",a,b,rem);
    return 0;
}