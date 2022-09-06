#include <stdio.h>

int main(void)
{
    int i,j,k;
    int arr[3][4][5];

    /* 배열 초기화 */
    for(i=0;i<3;i++)
        for(j=0;j<4;j++)
            arr[i][j][k]=i+j+k;
    
    /* 배열 출력 */
    for(i=0;i<3;i++)
    {
        printf("arr[%d]관련\n",i);
        for(j=0;j<4;j++)
        {
            for(k=0;k<5;k++)
                printf("%d",arr[i][j][k]);
            printf("\n");
        }
    }
    return 0;
}