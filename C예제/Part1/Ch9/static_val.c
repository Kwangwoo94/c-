#include <stdio.h>

void fct(void);

int main(void)
{
    int i;
    for(i=0;i<5;i++)
        fct();
    
    return 0;
}
void fct(void)
{
    int val=0; // static int val=0;
    val++;
    printf("%d",val);
}