#include <stdio.h>

int main(void)
{
    int somang[4][2];
    int i,j;
    int popu;

    //가구별 거주 인구 입력
    for(i=0;i<4;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d층 %d호 인구 입력 : ",i+1,j+1);
            scanf("%d",&somang[i][j]);
        }
    }

    //소망 빌라 층별 인구 수 출력
    for(i=0;i<4;i++)
    {
        popu=0;
        for(j=0;j<2;j++)
        {
            popu+=somang[i][j];
        }
        printf("%d층 전체 인구 : %d\n",i+1,popu);
    }
    return 0;
}