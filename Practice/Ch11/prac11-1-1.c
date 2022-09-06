#include <stdio.h>

int main(void)
{
    int arr[5];
    int total,i;

    for(i=0;i<5;i++)
    {
        printf("%d층에 사는 사람의 수 : ",i+1);
        scanf("%d",&arr[i]);
    }
    total=arr[0]+arr[1]+arr[2]+arr[3]+arr[4];
    printf("현재 거주하는 총 인원 : %d\n",total);

    return 0;
}