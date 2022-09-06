#include <stdio.h>

int val;
void add(int num);

int main(void)
{
    printf("val : %d\n",val);

    add(3);
    printf("val : %d\n",val);
    val++;
    printf("val : %d\n",val);

    return 0;
}
void add(int n)
{
    val+=n;
}