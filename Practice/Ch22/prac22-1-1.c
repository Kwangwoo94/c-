#include <stdio.h>

struct Employee
{
    char name[20];
    char pid[20];
    int salary;
};

int main(void)
{
    struct Employee emp;
    printf("이 름 : ");
    scanf("%s",emp.name);

    printf("주민번호 : ");
    scanf("%s",emp.pid);
    
    printf("연 봉 : ");
    scanf("%d",&emp.salary);

    printf("이 름 : %s\n",emp.name);
    printf("주민번호 : %s\n",emp.pid);
    printf("연 봉 : %d\n",emp.salary);

    return 0;
}
