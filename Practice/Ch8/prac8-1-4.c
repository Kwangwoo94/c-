#include <stdio.h>

int main(void)
{
    int a,b;
    int result;
    
    printf("두 개의 정수 입력 : ");
    scanf("%d %d",&a,&b);

    result=(a<b)?b-a:a-b;

    printf("뺄셈 결과 : %d\n",result);
    return 0;
}