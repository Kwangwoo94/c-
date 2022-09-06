#include <stdio.h>

int main(void)
{
    int a,b;
    int result;

    printf("두 개의 정수 입력 :");
    scanf("%d %d",&a,&b);

    if(a<b)
        result=b-a;
    else
        result=a-b;
    
    printf("뺄셈 결과 : %d\n",result);
    return 0;
}