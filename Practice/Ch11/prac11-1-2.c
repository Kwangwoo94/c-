#include <stdio.h>

int main(void)
{
    int arr[9];
    int n,i;

    printf("정수 입력 : ");
    scanf("%d",&n);

    for(i=1;i<10;i++)
        arr[i-1]=n*i;
    
    for(i=0;i<9;i++)
    {
        if(i%2==1)
            printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}