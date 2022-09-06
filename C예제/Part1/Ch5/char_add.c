#include <stdio.h>

int main(void)
{
    char a,b;
    char result;

    printf("-50 이상 +50 이하의 수 둘 입력: ");
    scanf("%d %d", &a, &b);
    result=a+b;
    printf("두 수의 덧셈 결과 : %d\n", result);

    return 0;
}