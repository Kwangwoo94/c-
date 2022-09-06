#include <stdio.h>

void save(int money);

int main(void)
{
    while (1)
    {
        int money;
        printf("저금할 금액 : ");
        scanf("%d",&money);
        if(money==-1)
            break;
        save(money);
    }

    printf("입금 완료 \n");
    return 0;
}

void save(int money)
{
    static int accu=0;
    accu+=money;
    printf("현재까지의 입금액 %d\n",accu);
}