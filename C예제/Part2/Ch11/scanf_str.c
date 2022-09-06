#include <stdio.h>

int main(void)
{
    char str[100];

    printf("문자열 입력 : ");
    scanf("%s",str);

    printf("입력된 문자열 : %s\n", str);
    return 0;
}