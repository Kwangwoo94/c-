#include <stdio.h>

#define SQUARE(x) x*x
int square(int x);

int main(void)
{
    int a;

    printf("Input a number(int) : ");
    scanf("%d",&a);

    /*(a+3)*(a+3) 계산 결과 출력*/
    printf("Square of %d : %d\n",a,SQUARE(a+3));
    printf("Square of %d : %d\n",a,square(a+3));

    return 0;
}

int square(int x)
{
    return x*x;
}