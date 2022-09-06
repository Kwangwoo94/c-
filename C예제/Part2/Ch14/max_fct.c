#include <stdio.h>

int MaxVal(int pArr[], int n)


int main(void)
{
    int arr[10]={4,8,3,7,2};
    int max;

    max=MaxVal(arr, sizeof(arr)/sizeof(int));
    printf("최대 값 : %d\n",max);

    return 0;
}

int MaxVal(int pArr[], int n)
{
    int max,i;
    max=pArr[0];

    for(i=1;i<n;i++)
        if(max<pArr[i])
            max=pArr[i];
    
    return max;
}