#include <stdio.h>

int main(void)
{
    int val1=10;
    int val2=10;

    printf("선 연산 후 증가: %d \n",val1++);
    printf("다시 한번 출력: %d\n\n",val1);

    printf("선 증가 후 연산: %d \n",++val2);
    printf("다시 한번 출력: %d\n", val2);

    return 0;
}