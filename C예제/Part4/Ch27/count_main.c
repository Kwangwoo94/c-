#include <stdio.h>
#include "minus.h"
#include "add.h"

int main()
{
    int result1;
    int result2;
    result1=add(3,4);
    result2=minus(4,3);

    printf("add : %d\n",result1);
    printf("minus : %d\n",result2);
    printf("count : %d\n",count);

    return 0;
}