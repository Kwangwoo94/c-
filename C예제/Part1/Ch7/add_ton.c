#include <stdio.h>

int main(void)
{
    int total=0;
    int i,n;

    printf("0부터 n까지의 덧셈, n은?");
    scanf("%d", &n);

    for (i = 0; i < n+1; i++)
        total+=i;

    printf("0부터 %d까지의 덧셈 결과 : %d \n",n,total);
    return 0;
    
}