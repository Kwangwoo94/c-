#ifndef _LINK_LIST_H_
#define _LINK_LIST_H_

#define MAX 100

typedef struct User
{
    char name[MAX];
    char phone[MAX];
    User *pNext;
}User;


#endif