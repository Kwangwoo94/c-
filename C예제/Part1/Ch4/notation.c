#include <stdio.h>

int main(void)
{
    int a=0xa7;
    int b=0x43;

    int c=032;
    int d=024;

    printf("16진수 0xa7: %d\n", a);
    printf("16진수 0x43: %d\n", b);

    printf("8진수 032: %d\n", c);
    printf("8진수 024: %d\n", d);

    printf("a-b=%d\n", a-b);
    printf("c+d=%d\n", c+d);
    printf("b*c=%d\n", b*c);

    return 0;
}