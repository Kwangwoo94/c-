#include <stdio.h>

int main(void)
{
    int i,j;

    for(i=0;i<3;i++)
    {
        printf("*** 현재 i는 %d ***\n", i);
        for(j=0;j<2;j++)
        {
            printf("현재 j는 %d\n",j);
        }
    }
    return 0;
}