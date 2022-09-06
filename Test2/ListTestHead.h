#ifndef _LIST_HEAD2_
#define _LIST_HEAD2_

typedef struct User
{
    char name[20];
    char phone[20];
    struct User* pNext;
}User;

typedef struct Temp
{
    char name[20];
    char phone[20];
}Temp;


void Init(User* user);
void AddUser(User* user);
void SearchUser(User* user);
void ModifyUser(User* user);
void DeleteUser(User* user);

#endif