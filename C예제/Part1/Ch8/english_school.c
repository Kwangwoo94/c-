#include <stdio.h>

int main(void)
{
    int n;
    printf("정수를 하나 입력하세요(1~5) : ");
    scanf("%d",&n);

    switch (n)
    {
    case 1:
        printf("1은 ONE. \n");
        break;
    case 2:
        printf("2는 TWO. \n");
        break;
    case 3:
        printf("3은 THREE. \n");
        break;
    case 4:
        printf("4는 FOUR. \n");
        break;
    case 5:
        printf("5는 FIVE. \n");
        break;
    default:
        printf("I don't know!\n");
    }
    return 0;
}