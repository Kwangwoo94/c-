#include <stdio.h>
#include <calculator.h>

int main()
{
    double a=10.2;
    double b=2.1;

    printf("덧셈 : %f\n",add(a,b));
    printf("뺄셈 : %f\n",minus(a,b));
    printf("나눗셈: %f\n",divide(a,b));
    printf("곱셈 : %f\n",multiple(a,b));

    printf("총 연산 수 : %d\n",cal_num);
    return 0;
}