#include <stdio.h>

int main(void)
{
    fputs("fputs 함수에 의한 출력, ",stdout);
    fputs("I Love Linux",stdout);
    fputs("\n",stdout); //한 줄 건너뛰기 위해서

    puts("puts 함수에 의한 출력, ");
    puts("I Love Linux");

    return 0;
}