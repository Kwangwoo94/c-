#include <stdio.h>

typedef struct Dog //선언 타입 1
{
    int data1;
    int data2;
}Dog;

typedef struct //선언 타입 2
{
    int data1;
    int data2;
}Cat;

int main(void)
{
    /* 선언 타입 1에 의한 변수 선언 */
    Dog d1; //typedef에 의한 선언
    struct Dog d2; //이전 형식 ok

    /* 선언 타입 2에 의한 변수 선언 */
    Cat c1; //typedef에 의한 선언
    //struct Cat c2; //이전 형식 error

    return 0;
}