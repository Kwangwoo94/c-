#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int* a;
    a=(int*)malloc(sizeof(int)); //메모리 할당
    if(a==NULL) //메모리 할당의 성공 유무 확인
    {
        puts("메모리 할당에 실패!");
        exit(1);
    }
    *a=20;
    printf("힙에 저장된 변수 a: %d\n",*a);

    free(a); //메모리 해제
    return 0;
}