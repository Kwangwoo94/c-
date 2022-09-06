#include <stdio.h>

void SelFunction(int s);
void Add(void);
void Min(void);

int main(void)
{
    int sel;

    while (1)
    {
        printf("선택 : 덧셈(1), 뺄셈(2), 종료(3) ");
        scanf("%d",&sel);
        if(sel==3)
            break;
        SelFunction(sel);
    }
    printf("프로그램이 종료되었습니다. \n");

    return 0;
}

void SelFunction(int s)
{
    void (*fPtr)(void);
    if(s==1)
        fPtr=Add;
    else
        fPtr=Min;
    fPtr();
}

void Add(void)
{
    int a,b;
    printf("덧셈을 위한 두 개의 숫자 입력 : ");
    scanf("%d %d",&a,&b);
    printf("덧셈 결과 : %d\n\n",a+b);
}

void Min(void)
{
    int a,b;
    printf("뺄셈을 위한 두 개의 숫자 입력 : ");
    scanf("%d %d",&a,&b);
    printf("뺄셈 결과 : %d\n\n",a-b);
}