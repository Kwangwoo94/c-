#include <stdio.h>

int main(void)
{
    int val1=10;
    int val2=(val1--)+2;

    printf("val1 : %d\n", val1);
    printf("val2 : %d\n", val2);

    return 0;
}