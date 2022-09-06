#include <stdio.h>

int main(void)
{
    int kor,eng,math;
    int avr;

    printf("국어,영어,수학의 성적을 입력 : ");
    scanf("%d %d %d",&kor,&eng,&math);

    avr=(kor+eng+math)/3;
    printf("평균 : %d\n",avr);

    if (avr<50)
        printf("F!\n");
    else if(avr>=90)
        printf("A!\n");
    else if(avr>=80)
        printf("B!\n");
    else if(avr>=70)
        printf("C!\n");
    else
        printf("D!\n");
    
    return 0;
}