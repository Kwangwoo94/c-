#include <stdio.h>

struct simple
{
    int data1;
    int data2;
};

void show(struct simple ts);
void swap(struct simple *s1,struct simple *s2);

int main()
{
    struct simple s1={1,2};
    struct simple s2={3,4};

    /*swap 이전 출력*/
    show(s1);
    show(s2);

    swap(&s1,&s2);
    /*swap 이후 출력*/
    show(s1);
    show(s2);
    return 0;
}

void show(struct simple ts)
{
    printf("data1:%d,data2:%d\n",ts.data1,ts.data2);
}

void swap(struct simple *s1,struct simple *s2)
{
    struct simple temp=*s1;
    *s1=*s2;
    *s2=temp;
}
