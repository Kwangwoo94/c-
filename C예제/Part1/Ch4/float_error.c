#include <stdio.h>

int main(void)
{
    int i;
    float f=0.0;

    for(i=0;i<100;i++)
        f+=0.1;

    printf("%f\n",f);

    return 0;
}