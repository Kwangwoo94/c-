#include <stdio.h>

struct Employee
{
    char name[20];
    char pid[20];
    int salary;
} emp1,emp2;

int main(void)
{
    /*employee 1*/
    printf("이 름 : ");
    scanf("%s",emp1.name);

    printf("주민번호 : ");
    scanf("%s",emp1.pid);

    printf("연 봉 : ");
    scanf("%d",emp1.salary);

    /*employee 2*/
    printf("이 름 : ");
    scanf("%s",emp2.name);

    printf("주민번호 : ");
    scanf("%s",emp2.pid);

    printf("연 봉 : ");
    scanf("%d",emp2.salary);

    /*print*/
    printf("이 름 : %s\n",emp1.name);
    printf("주민번호 : %s\n",emp1.pid);
    printf("연 봉 : %d\n",emp1.salary);

    printf("이 름 : %s\n",emp2.name);
    printf("주민번호 : %s\n",emp2.pid);
    printf("연 봉 : %d\n",emp2.salary);
    return 0;
}
