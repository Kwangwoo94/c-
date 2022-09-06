#include <stdio.h>

int main(void)
{
    int val;
    printf("하나의 정수 입력 : ");
    scanf("%d",&val);

    printf("%d의 제곱 결과 : %d\n",val,val*val);
    return 0;
}