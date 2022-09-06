#include <stdio.h>

int main(void)
{
    char a='a';
    int b=1;
    float c=1.3f;
    double d=3.5;

    char *p1=&a;
    int *p2=&b;
    float *p3=&c;
    double *p4=&d;

    *p1=*p1+1;
    *p2=*p2+1;
    *p3+=1;
    *p4+=1;

    printf("a : %c\n",a);
    printf("b : %d\n",b);
    printf("c : %f\n",c);
    printf("d : %f\n",d);

    return 0;
}