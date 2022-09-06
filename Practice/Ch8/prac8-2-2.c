#include <stdio.h>

int main(void)
{
    int a,b;
    int result;

    for(a=1;a<10;a++)
    {
        for(b=1;b<10;b++)
        {
            if(a==b)
                continue;
            result=(a*10+b)+(b*10+a);
            if(result==99)
                printf("%d%d+%d%d=%d",a,b,b,a,result);
        }
    }
    return 0;
}