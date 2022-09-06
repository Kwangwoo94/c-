#include <stdio.h>

int Large_Num(int a,int b);

int main(void)
{
    printf("3과 4중에서 큰수는 %d 이다 \n", Large_Num(3, 4));
    printf("7과 2중에서 큰수는 %d 이다 \n", Large_Num(7, 2));

    return 0;
}

int Large_Num(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}