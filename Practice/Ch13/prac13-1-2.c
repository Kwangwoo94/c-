#include <stdio.h>

int main(void)
{
    int arr[5]={1,2,3,4,5};
    int *p=arr;
    int i,temp;

    for(i=0;i<4-i;i++)
    {
        temp=p[i];
        p[i]=p[4-i];
        p[4-i]=temp;
    }

    for(i=0;i<5;i++)
        printf("%d",p[i]);
    
    return 0;
}