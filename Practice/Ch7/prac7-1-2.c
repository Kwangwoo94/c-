#include <stdio.h>

int main(void)
{
    int i=0,cnt;
    int num=0;

    printf("3의 배수의 개수 : ");
    scanf("%d",&cnt);

    while(num++<cnt)
    {
        i+=3;
        printf("%d",i);
    }
    return 0;
}