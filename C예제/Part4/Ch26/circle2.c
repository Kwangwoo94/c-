#include <stdio.h>

int main(void)
{
    double area;
    double radius;

    fputs("반지름 : ",stdout);
    scanf("%lf",&radius);

    area=radius*radius*3.1415;
    printf("넓이는 %f입니다.\n",area);

    return 0;
}