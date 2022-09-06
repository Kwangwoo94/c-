#include <stdio.h>

int main(void)
{
    int day;
    printf("Input a day(0:Monday ~ 6:Sunday) : ");
    scanf("%d",&day);

    switch (day)
    {
    case 0:
        printf("수영을 하세요.\n");
        break;
    case 1:
        printf("조깅을 하세요.\n");
        break;
    case 2:
        printf("조금 더 주무세요.\n");
        break;
    case 3:
        printf("볼링을 하세요.\n");
        break;
    case 4:
        printf("조금 더 주무세요.\n");
        break;
    case 5:
        printf("등산을 하세요.\n");
        break;
    case 6:
        printf("원하는걸 하세요.\n");
        break;
    }
    return 0;
}