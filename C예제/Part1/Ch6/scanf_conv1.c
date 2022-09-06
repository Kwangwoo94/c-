#include <stdio.h>

int main(void)
{
    int i,j,k;
    printf("세 개의 정수 입력: ");
    scanf("%d %o %x", &i,&j,&k);

    printf("입력에 대한 출력 : ");
    printf("%d %d %d \n", i,j,k);

    return 0;
}