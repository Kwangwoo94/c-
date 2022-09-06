#include <stdio.h>

int main(void)
{
    float f;
    double d;

    printf("두 개의 실수 입력: ");
    scanf("%f %e", &f, &d);

    printf("입력에 대한 출력: ");
    printf("%f %e \n",f,d);

    return 0;
}