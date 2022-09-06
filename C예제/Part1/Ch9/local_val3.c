#include <stdio.h>

int main(void)
{
    int val=0;
    
    {
        //중괄호 시작
        int val=0;
        val+=10;
        printf("if의 지역 변수 val: %d\n",val);
    } //중괄호 끝
    printf("main의 지역 변수 val : %d\n",val);
    return 0;
}