#include <stdio.h>

int main(void)
{
    int a=2005;
    int* pA=&a;

    printf("pA: %d\n",pA); // 포인터 pA가 지니는 주소 값 출력
    printf("&a: %d\n",&a); // 변수 a의 주소 값 출력

    (*pA)++;

    printf("a: %d\n",a);
    printf("*pA: %d\n",*pA);

    return 0;
}