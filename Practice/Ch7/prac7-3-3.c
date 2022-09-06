#include <stdio.h>

int main(void)
{
    int i=2;
    int j=0;

    do
    {
        j=1;
        do
        {
            printf("%d*%d=%d",i,j,i*j);
            j++;
        } while (j<10);
        i++;
    } while (i<10);
    return 0;
}