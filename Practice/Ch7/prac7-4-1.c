#include <stdio.h>

int main(void)
{
    int start,end;
    int result;

    printf("시작과 끝 입력 : ");
    scanf("%d %d",&start,&end);

    for (result=0;start<=end;start++)
    {
        result+=start;
    }
    printf("시작과 끝 사이의 합계 : %d\n",result);
    return 0;
}