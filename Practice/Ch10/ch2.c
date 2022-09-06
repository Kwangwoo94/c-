#include <stdio.h>

int main(void)
{
    int n1,n2;
    int i,j;
    int max,min;

    printf("두 개의 정수를 입력하세요(1~9) : ");
    scanf("%d %d",&n1,&n2);

    if(n1>n2)
    {
        max=n1;
        min=n2;   
    }
    else
    {
        max=n2;
        min=n1;
    }
        
    for(i=min;i<=max;i++)
    {
        for(j=1;j<10;j++)
        {
            printf("%d * %d = %d\n",i,j,i*j);
        }
    }
    return 0;
}