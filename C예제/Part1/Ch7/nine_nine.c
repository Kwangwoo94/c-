#include <stdio.h>

int main(void)
{
    int val;
    int i=1;

    printf("출력하고자 하는 구구단, 몇단?");
    scanf("%d",&val);

    while (i<10)
    {
        printf("%d*%d=%d",val,i,val*i);
        i++;
    }
    return 0;
    
}