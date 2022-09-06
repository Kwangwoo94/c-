#include <stdio.h>

int main(void)
{
    int a,b;
    printf("두 개의 정수 입력 : ");
    scanf("%d %d",&a,&b);

    printf("뺄셈 결과 : %d\n",a-b);
    printf("덧셈 결과 : %d\n",a+b);
    return 0;
}