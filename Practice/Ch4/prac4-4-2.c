#include <stdio.h>

int main(void)
{
    int n;

    printf("값을 입력하세요 : ");
    scanf("%d",&n);
    n=n<<1; //n의 값을 2배로 증가!

    printf("%d\n",n);
    return 0;
}