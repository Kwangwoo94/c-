#include <stdio.h>

void Add(int a,int b);
void SPrint(char * str);

int main(void)
{
    char *string="Functino Pointer";
    int a=10,b=20;

    void (*fPtr1)(int, int)=Add;
    void (*fPtr2)(char*)=SPrint;

    /*함수 포인터에 의한 호출*/
    fPtr1(a,b);
    fPtr2(string);

    return 0;
}

void Add(int a,int b)
{
    printf("덧셈 결과 : %d\n",a+b);
}

void SPrint(char * str)
{
    printf("입력된 문자열 : %s\n",str);
}