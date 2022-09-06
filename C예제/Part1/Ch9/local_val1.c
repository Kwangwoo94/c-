#include <stdio.h>

int main(void)
{
    int i;
    for(i=0;i<3;i++)
    {
        int a=0;
        a++;
        printf("%d번째 for루프, 지역 변수 a는 %d\n",i,a);
    }
    if(i==3)
    {
        int a=10;
        a++;
        printf("if문 내에 존재하는 지역 변수 a는 %d\n",a);
    }
    return 0;
}