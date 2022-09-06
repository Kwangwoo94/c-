#include <stdio.h>
#define NUM 10 //매크로 상수 선언

int main(void)
{
    int arr[NUM]={1,2,3,};
    int i;

    for(i=0;i<NUM;i++)
        printf("%d",arr[i]);

    return 0;
}