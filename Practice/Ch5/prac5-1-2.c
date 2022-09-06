#include <stdio.h>

int main(void)
{
    double d1,d2;

    printf("두개의 실수 입력 : ");
    scanf("%lf %lf",&d1,&d2);

    printf("두 수의 덧셈 : %f\n",d1+d2);
    printf("두 수의 뺄셈 : %f\n",d1-d2);
    printf("두 수의 곱셈 : %f\n",d1*d2);
    printf("두 수의 나눗셈 : %f\n",d1/d2);
    return 0;
}