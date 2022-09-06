#include <stdio.h>

int main(void)
{
    int val1=2;
    int val2=-4;

    val1=-val1;
    printf("val1=-val1 연산 이후 val1은 %d\n", val1);

    val2=-val2;
    printf("val2=-val2 연산 이후 val2은 %d\n", val2);

    return 0;

}