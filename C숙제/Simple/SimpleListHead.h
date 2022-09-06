#ifndef _SIMPLE_LIST_
#define _SIMPLE_LIST_

typedef struct User
{
    char name[20];
    char phone[20];
    struct User *pNext;
}User;


#endif