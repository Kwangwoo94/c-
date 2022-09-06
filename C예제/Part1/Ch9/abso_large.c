#include <stdio.h>

int Abso_Large(int a, int b);
int Abso_Val(int val);

int main(void)
{
    int a,b;
    printf("두 개의 정수 입력 : ");
    scanf("%d %d",&a,&b);

    printf("%d와 %d중 큰 절대 값: %d \n",a,b,Abso_Large(a, b));

    return 0;
}

int Abso_Large(int a, int b)
{
    if(Abso_Val(a) > Abso_Val(b))
        return a;
    else
        return b;
}

int Abso_Val(int val)
{
    if(val<0)
        return val*-1;
    else   
        return val;
}