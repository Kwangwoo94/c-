#include <stdio.h>

void ShowFibo(int a);

int main(void)
{
    int n;
    printf("출력하고자 하는 피보나치 수열의 수 : ");
    scanf("%d",&n);
    if(n<1)
    {
        printf("1 이상의 값을 입력하세요.\n");
        return -1;
    }

    ShowFibo(n);
    return 0;
}

void ShowFibo(int a)
{
    int f1=0;
    int f2=1;
    int f3,i;

    if(a==1)
        printf("%d, ",f1);
    else
        printf("%d, %d,",f1,f2);

    for(i=0;i<a-2;i++)
    {
        f3=f1+f2;
        printf("%d, ",f3);

        f1=f2;
        f2=f3;
    }
}