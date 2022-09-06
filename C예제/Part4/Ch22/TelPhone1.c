#include <stdio.h>
#include <string.h>

struct person
{
    char name[20];
    char phone[20];
};

int main(void)
{
    struct person p;

    strcpy(p.name, "Free Lec");
    strcpy(p.phone, "02-3142-6702");

    printf("name : %s, phone : %s\n",p.name,p.phone);

    return 0;
}
