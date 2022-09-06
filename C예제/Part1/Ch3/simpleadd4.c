#include <stdio.h>

int main(void)
{
    int result;
    int val1, val2;

    printf("숫자 둘을 입력하세요: ");
    scanf("%d %d", &val1, &val2);

    result=val1+val2;
    printf("%d + %d = %d\n", val1,val2,result);

    return 0;
}