#include <stdio.h>

void swap(int* a,int* b);

int main(void)
{
    int val1=10;
    int val2=20;

    printf("Before val1 : %d\n",val1);
    printf("Before val2 : %d\n",val2);

    swap(&val1, &val2); //val1,val2 주소 전달

    printf("After val1 : %d\n",val1);
    printf("After val2 : %d\n",val2);

    return 0;
}

void swap(int* a,int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}