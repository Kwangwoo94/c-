#ifndef _LIST_TEST_H_
#define _LIST_TEST_H_

typedef struct User
{
    char name[20];
    char phone[20];
}User;

typedef struct Node
{
    struct User user;
    Node *pNext;
}Node;

Node *CreateNode(void);
void AddUser(Node *pHead,Node *newNode);
Node *SearchUser(Node *pHead);
void DeleteUser(Node *pHead,Node *remove);
void ModifyUser(Node *pHead,Node *modify);
void WriteFile(Node *pHead);

#endif
