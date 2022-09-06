#include <stdio.h>

int val=0; //전역 변수 val

void fct(void);

int main(void)
{
    val=10;
    printf("val : %d\n",val);

    fct();
    printf("val : %d\n",val);

    return 0;
}
void fct(void)
{
    int val=20; //지역 변수 val
    val++;
}