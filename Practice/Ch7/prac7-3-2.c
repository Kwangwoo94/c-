#include <stdio.h>

int main(void)
{
    int total=0;
    int val=0;

    do
    {
        total+=val;
        val=val+2;
    } while (val<=100);
    
    printf("Total : %d\n",total);
    return 0;
}