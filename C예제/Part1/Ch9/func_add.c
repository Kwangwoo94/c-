#include <stdio.h>

int Add(int a,int b);
int Input(void);
void Result_Print(int val);
void Intro(void);

int main(void)
{
    int a,b;
    int output;

    Intro();
    a=Input();
    b=Input();

    output = Add(a,b);
    Result_Print(output);

    return 0;
}

int Add(int i,int j)
{
    int result=i+j;
    return result;
}
int Input(void)
{
    int input;
    scanf("%d",&input);
    return input;
}
void Result_Print(int val)
{
    printf("덧셈에 대한 결과 : %d\n",val);
    printf("****** END *******\n ");
}
void Intro(void)
{
    printf("****** START ******\n");
    printf("두개의 정수 입력: ");
}