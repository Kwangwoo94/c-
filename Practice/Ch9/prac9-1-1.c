#include <stdio.h>

int Max(int a,int b,int c);
int Min(int a,int b,int c);

int main(void)
{
    int val1,val2,val3;
    printf("세 개의 정수 입력 : ");
    scanf("%d %d %d",&val1,&val2,&val3);

    printf("가장 큰 수 : %d\n",Max(val1,val2,val3));
    printf("가장 작은 수 : %d\n",Min(val1,val2,val3));
    return 0;
}

int Max(int a,int b,int c)
{
    if(a>b)
        return (a>c)?a:c;
    else
        return (b>c)?b:c;
}

int Min(int a,int b,int c)
{
    if(a<b)
        return (a<c)?a:c;
    else
        return (b<c)?b:c;
}