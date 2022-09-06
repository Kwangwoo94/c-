#include <stdio.h>

enum color {RED=1,GREEN=3,BLUE=5};

int main()
{
    enum color c1=RED;
    enum color c2=GREEN;
    enum color c3=BLUE;

    printf("열거형 변수 출력 : %d, %d, %d\n",c1,c2,c3);
    printf("상수 출력 : %d, %d, %d\n",RED,GREEN,BLUE);

    return 0;
}
