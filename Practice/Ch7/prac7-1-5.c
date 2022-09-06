#include <stdio.h>

int main(void)
{
    int total=0,i=0;
    int num,input;

    printf("입력할 정수의 개수 : ");
    scanf("%d",&num);

    while(i++<num)
    {
        printf("정수 입력 : ");
        scanf("%d",&input);
        total+=input;
    }
    printf("입력의 평균: %f\n",(float)total/num);
    return 0;
}