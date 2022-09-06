#include <stdio.h>

void function(int);

int main(void)
{
    int m=0;
    scanf("%d",&m); //배열의 길이 입력받음
    function(m); //배열의 길이 전달

    return 0;
}

void function(int i)
{
    int array[i]; //입력받은 길이 만큼 배열 할당
}