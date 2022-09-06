#include <stdio.h>

int main(void)
{
    int i;
    printf("start! \n");

    for(i=0;i<20;i++)
    {
        if(i%2==0 || i%3==0)
            continue;
        printf("%d\n", i);
    }
    printf("end!\n");

    return 0;
}