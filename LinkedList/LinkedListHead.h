#ifndef _LINKED_LIST_H_
#define _LINKED_LIST_H_
#define MAX 100
#define NULL 0

typedef struct User
{
    char name[MAX];
    char phone[MAX];
    User *pNext;
}User;

User *pFirstNode = NULL;

User *pMakeNode();
void AddUser(User **pHead,char username[],char userphone[]);
void DeleteUser(char username[]);
void SearchUser();
void ModifyUser();
void LoadFile();
void WriteFile();

#endif