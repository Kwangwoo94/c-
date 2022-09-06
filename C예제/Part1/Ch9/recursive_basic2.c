#include <stdio.h>

void Recursive(int n)
{
    printf("Recursive Call!\n");
    if(n==1) //재귀 호출 탈출 조건!
        return;
    Recursive(n-1);
}

int main(void)
{
    int a=2;
    Recursive(a);
    return 0;
}