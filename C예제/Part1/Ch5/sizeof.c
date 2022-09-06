#include <stdio.h>

int main(void)
{
    char c=10;
    int i=3048;
    double f=3.1415;

    printf("변수 c의 크기 : %d\n", sizeof c);
    printf("변수 i의 크기 : %d\n", sizeof i);
    printf("변수 f의 크기 : %d\n", sizeof f);

    printf("char 할당 메모리 : %d\n", sizeof(char));
    printf("int 할당 메모리 : %d\n", sizeof(int));
    printf("double 할당 메모리 : %d\n",sizeof(double));

    printf("float 할당 메모리 : %d\n", sizeof(float));
    printf("double 할당 메모리 : %d\n", sizeof(double));
    
    return 0;
}