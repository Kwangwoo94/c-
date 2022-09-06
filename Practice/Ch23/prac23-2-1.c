#include <stdio.h>

int main(void)
{
    char arr[3][3][10];
    int i;

    for(i=0;i<3;i++)
    {
        printf("이름,전화번호,주소 순으로 입력 : ");
        scanf("%s %s %s",arr[i][0],arr[i][1],arr[i][2]);
    }
    printf("\n입력 결과는 다음과 같습니다.\n");
    for(i=0;i<3;i++)
    {
        printf("----%d번째 사람----\n",i+1);
        printf("이 름 : %s\n",arr[i][0]);
        printf("전화번호 : %s\n",arr[i][1]);
        printf("주 소 : %s\n",arr[i][2]);
    }

    return 0;
}