#include <stdio.h>

int main(void)
{
    int val1=10;
    int val2=12;
    int result1, result2, result3;

    result1=(val1==10 && val2==12);
    result2=(val1<12 || val2>12);
    result3=(!val1);

    printf("result1 : %d\n", result1);
    printf("result2 : %d\n", result2);
    printf("result3 : %d\n", result3);

    return 0;
}