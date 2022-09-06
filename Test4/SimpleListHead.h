#ifndef _SIMPLE_HEAD_
#define _SIMPLE_HEAD_
#define SIZE 100
#define NULL 0

typedef struct User
{
    char name[SIZE];
    char phone[SIZE];
}User;

typedef struct Node
{
    struct User user;
    Node* pNext;
}Node;

Node* pHead = NULL;
Node* pTail = NULL;

#endif