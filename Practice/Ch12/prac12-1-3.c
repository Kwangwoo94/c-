#include <stdio.h>

int main(void)
{
    int a=10;
    int b=20;

    int *p1=&a;
    int *p2=&b;
    int * temp;

    (*p1)--;
    (*p2)--;

    temp=p1;
    p1=p2;
    p2=temp;

    printf("%d, %d\n",*p1,*p2);
    return 0;
}