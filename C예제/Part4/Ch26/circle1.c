#include <stdio.h>
#define PI 3.1415 //매크로 선언

int main(void)
{
    double area;
    double radius;

    fputs("반지름 : ",stdout);
    scanf("%lf",&radius);

    area=radius*radius*PI;
    printf("넓이는 %f 입니다.\n",area);

    return 0;
}