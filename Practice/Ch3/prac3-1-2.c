#include <stdio.h>

int main(void)
{
    int a,b,c;
    int result;
    printf("세 개의 정수 입력 : ");
    scanf("%d %d %d",&a,&b,&c);

    result=a*b+c;
    printf("%d*%d+%d=%d",a,b,c,result);
    return 0;
}