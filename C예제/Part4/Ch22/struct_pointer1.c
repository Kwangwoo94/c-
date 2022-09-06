#include <stdio.h>

struct person
{
    char name[20];
    char phone[20];
};

int main()
{
    struct person man={"Thomas","354-00xx"};
    struct person* pMan;
    pMan=&man;

    //구조체 변수를 이용한 출력
    printf("name    : %s\n",man.name);
    printf("phone   : %s\n",man.phone);

    //구조체 포인터를 이용한 출력 1
    printf("name    : %s\n",(*pMan).name);
    printf("phone   : %s\n",(*pMan).phone);

    //구조체 포인터를 이용한 출력 2
    printf("name    : %s\n",pMan->name);
    printf("phone   : %s\n",pMan->phone);

    return 0;
}
