#include <stdio.h>

int main(void)
{
    int* arr1[5];
    int* arr2[3][5];

    int** p1=arr1;
    int* (*p2)[5]=arr2;

    return 0;
}