#include <stdio.h>

int add(int a,int b);

int main(void)
{
    int val1=10;
    int val2=20;
    printf("결과 : ", add(val1, val2));

    return 0;
}
int add(int a, int b)
{
    return a+b;
}