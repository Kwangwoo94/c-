#include <stdio.h>

void pswap(int **p1,int **p2);

int main(void)
{
    int A=10, B=20;
    int *pA, *pB;

    pA=&A, pB=&B;

    //함수 호출전
    printf("pA가 가리키는 변수 : %d\n",*pA);
    printf("pB가 가리키는 변수 : %d\n",*pB);

    pswap(&pA,&pB);

    //함수 호출후
    printf("pA가 가리키는 변수 : %d\n",*pA);
    printf("pB가 가리키는 변수 : %d\n",*pB);

    return 0;
}

void pswap(int **p1,int **p2)
{
    int *temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}