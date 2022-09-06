#include <stdio.h>

void fct1(int *p1,int *p2);
void fct2(int (*p1)[4],int (*p2)[4]);

int main(void)
{
    int arr1[3];
    int arr2[4];

    int arr3[3][4];
    int arr4[2][4];

    fct1(arr1,arr2);
    fct2(arr3,arr4);

    return 0;
}

void fct1(int *p1,int *p2)
{
    printf("NOTHING!");
}

void fct2(int (*p1)[4],int (*p2)[4])
{
    printf("NOTHING!");
}