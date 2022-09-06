#include <stdio.h>

struct simple
{
    int data1;
    int data2;
};

void show(struct simple ts); //Call-by-Value
void swap(struct simple* ps); //Call-by-Reference

int main()
{
    struct simple s={1,2};

    show(s); //s의 멤버 출력
    swap(&s); //s의 멤버 data1,data2의 값 변경
    show(s); //s의 변경된 멤버 출력

    return 0;
}

void show(struct simple ts)
{
    printf("data1:%d, data2:%d\n",ts.data1,ts.data2);
}
void swap(struct simple* ps)
{
    int temp;
    temp=ps->data1;
    ps->data1=ps->data2;
    ps->data2=temp;
}
