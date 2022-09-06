#include <stdio.h>

int main(void)
{
    int arr[2]={1,2};
    int* pArr=arr;

    //배열 이름을 통한 출력(배열 이름을 포인터처럼 사용)
    printf("%d, %d\n", arr[0],*(arr+1));

    //포인터 변수를 통한 출력(포인터를 배열처럼 사용)
    printf("%d, %d\n",pArr[0],*(pArr+1));

    return 0;
}