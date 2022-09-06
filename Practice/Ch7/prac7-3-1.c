#include <stdio.h>

int main(void)
{
    int total=0;
    int val=0;

    printf("숫자 입력 (0 to quit) : ");
    scanf("%d",&val);
    total+=val;

    while (val!=0)
    {
        printf("숫자 입력 (0 to quit) : ");
        scanf("%d",&val);
        total+=val;
    }
    printf("Total : %d\n",total);
    return 0;
}