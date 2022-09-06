#include <stdio.h>

enum days {MON,TUE,WED,THU,FRI,SAT,SUN};

int main()
{
    enum days day;
    printf("Input a day(0:Monday ~ 6:Sunday) : ");
    scanf("%d",&day);

    switch (day)
    {
    case MON:
        printf("수영을 하세요.\n");
        break;
    case TUE:
        printf("조깅을 하세요.\n");
        break;
    case WED:
        printf("조금 더 주무세요.\n");
        break;
    case THU:
        printf("볼링을 하세요.\n");
        break;
    case FRI:
        printf("조금 더 주무세요.\n");
        break;
    case SAT:
        printf("등산을 하세요.\n");
        break;
    case SUN:
        printf("원하는걸 하세요.\n");
        break;
    }
    return 0;
}