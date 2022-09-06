#include <stdio.h>

int main(void)
{
    int opt;
    float val1, val2;
    float result;

    printf("덧셈 1, 뺄셈 2, 곱셈 3, 나눗셈 4\n");
    printf("선택? : ");
    scanf("%d", &opt);
    printf("두개의 실수 입력 : ");
    scanf("%f %f", &val1,&val2);

    if(opt==1)
    {
        result=val1+val2;
        printf("결과: %f\n", result);
    }
    else if(opt==2)
    {
        result=val1-val2;
        printf("결과: %f\n", result);
    }
    else if(opt==3)
    {
        result=val1*val2;
        printf("결과: %f\n", result);
    }
    else if(opt==4)
    {
        result=val1/val2;
        printf("결과: %f\n", result);
    }
    else
        printf("잘못된 선택을 하셨습니다.\n");
    return 0;
}