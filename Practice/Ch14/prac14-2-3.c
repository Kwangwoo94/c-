#include <stdio.h>

void swap(int *pA,int *pB,int *pC)
{
    int temp=*pA;
    *pA=*pC;
    *pC=*pB;
    *pB=temp;
}

int main(void)
{
    int a=10,b=20,c=30;
    swap(&a,&b,&c);
    printf("%d %d %d\n",a,b,c);
    return 0;
}