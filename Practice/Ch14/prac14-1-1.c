#include <stdio.h>

int Square(int n)
{
    return n*n;
}

int main(void)
{
    int a;
    printf("정수 입력 : ");
    scanf("%d",&a);

    a=Square(a);
    printf("연산 결과 : %d\n",a);
    return 0;
}