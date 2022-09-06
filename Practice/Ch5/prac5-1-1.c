#include <stdio.h>

int main(void)
{
    int x1,y1;
    int x2,y2;
    int area;

    printf("첫번째 포인트의 x,y 좌표 : ");
    scanf("%d %d",&x1,&y1);

    printf("두번째 포인트의 x,y 좌표 : ");
    scanf("%d %d",&x2,&y2);

    area=(x2-x1)*(y2-y1);
    printf("넓이 : %d\n",area);
    return 0;
}