#include <stdio.h>

int main(void)
{
    int a,b;

    for(;;)
    {
        printf("두 개의 정수 입력 : ");
        scanf("%d %d", &a, &b);
        printf("두 수의 합: %d\n", a+b);
    }

    return 0;
}