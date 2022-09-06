#include <stdio.h>

int Square(int *pA)
{
    *pA=(*pA)*(*pA);
}

int main(void)
{
    int a;
    printf("정수 입력 : ");
    scanf("%d",&a);

    Square(&a);
    printf("연산 결과 : %d\n",a);
    return 0;
}