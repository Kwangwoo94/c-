#include <stdio.h>

int main(void)
{
    int n;

    printf("음의 정수 값을 입력하세요 : ");
    scanf("%d",&n);
    n=-n;
    n=n+1;

    printf("%d\n",n);
    return 0;
}