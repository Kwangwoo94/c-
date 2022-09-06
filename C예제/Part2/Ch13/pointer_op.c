#include <stdio.h>

int main(void)
{
    int* ptr1=0;
    char* ptr2=0;
    double* ptr3=0;

    printf("%d번지, %d번지, %d번지\n",ptr1++,ptr2++,ptr3++);
    printf("%d번지, %d번지, %d번지\n",ptr1,ptr2,ptr3);

    return 0;
}