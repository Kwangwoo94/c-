#include <stdio.h>

int main(void)
{
    int x;
    char ch;

    printf("정수 입력: ");
    scanf("%d",&x);

    ch=(x<0)? '-':'+';
    (ch=='+')? printf("양수 \n"):printf("음수 \n");
    printf("절대 값: %d\n",(x<0)?-1*x:x);
    
    return 0;
}