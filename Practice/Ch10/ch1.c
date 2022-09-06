#include <stdio.h>

int main(void)
{
    int n;
    printf("10진 정수를 입력하세요 : ");
    scanf("%d",&n);

    printf("입력한 10진 정수의 16진 값 : %x\n",n);
    return 0;
}