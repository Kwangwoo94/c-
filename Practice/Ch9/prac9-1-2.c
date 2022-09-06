#include <stdio.h>

double Fahrenheit(double c);
double Celsius(double f);

int main(void)
{
    int sel;
    double val;
    printf("섭씨 입력 1, 화씨 입력 2 : ");
    scanf("%d",&sel);

    if(sel==1)
    {
        printf("섭씨 입력 : ");
        scanf("%lf",&val);
        printf("변환된 화씨 : %f\n",Fahrenheit(val));
    }
    else if(sel==2)
    {
        printf("화씨 입력 : ");
        scanf("%lf",&val);
        printf("변환된 섭씨 : %f\n",Celsius(val));
    }
    else
        printf("선택 오류\n");
    
    return 0;
}

double Fahrenheit(double c)
{
    return 1.8*c+32;
}

double Celsius(double f)
{
    return (f-32)/1.8;
}
