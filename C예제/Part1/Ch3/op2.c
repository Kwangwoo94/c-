#include <stdio.h>

int main(void)
{
    int val1=2;
    int val2=4;
    int val3=6;

    val1+=3;
    val2*=4;
    val3%=5;

    printf("result : %d %d %d \n",val1,val2,val3);

    return 0;
}