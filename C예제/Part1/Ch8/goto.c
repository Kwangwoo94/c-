#include <stdio.h>

int main(void)
{
    int num;

    printf("숫자 입력(1,2,3) : ");
    scanf("%d",&num);

    if(num==1)
        goto label1;
    else if(num==2)
        goto label2;
    else
        goto label3;
    
    label1:
    printf("1을 입력하셨습니다!\n");
    return 0;

    label2:
    printf("2를 입력하셨습니다!\n");
    return 0;

    label3:
    printf("3을 입력하셨습니다!\n");\
    return 0;
}