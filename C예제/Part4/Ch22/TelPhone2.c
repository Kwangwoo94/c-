#include <stdio.h>

struct person
{
    char name[20];
    char phone[20];
};

int main(void)
{
    struct person pArray[3];
    int i;

    for(i=0;i<3;i++) //데이터 입력
    {
        printf("이름, 전화번호 순으로 입력 : ");
        scanf("%s %s",pArray[i].name,pArray[i].phone);
    }

    printf("\n입력 결과는 다음과 같습니다.\n");
    for(i=0;i<3;i++)
    {
        printf("이름 : %s, ",pArray[i].name);
        printf("전화번호 : %s\n",pArray[i].phone);
    }
    return 0;
}
