#include <stdio.h>

int main(void)
{
    int result;
    int val1, val2;

    printf("첫번째 숫자 : ");
    scanf("%d", &val1);

    printf("두번째 숫자 : ");
    scanf("%d", &val2);

    result=val1+val2;
    printf("%d + %d = %d \n", val1, val2, result);

    return 0;
}