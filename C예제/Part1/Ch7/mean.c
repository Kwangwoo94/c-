#include <stdio.h>

int main(void)
{
    float total=0.0;
    float input=0.0;
    int count=0;

    for(;input>=0.0;)
    {
        total+=input;
        printf("양의 실수 입력(minus to quit): ");
        scanf("%f",&input);
        count++;
    }

    printf("지금까지의 평균: %f\n", total/count);
    return 0;
}