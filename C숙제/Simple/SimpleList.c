#include "SimpleListHead.h"
#include <stdio.h>
#include <stdlib.h>

User *pHead = NULL;

int input(char *name,char *phone)
{
    printf("Type User Name : ");
    scanf("%s\n",name);
    printf("Type Your Phone Number : ");
    scanf("%s\n",phone);
}

void AddUser(char *name,char *phone)
{
    User *pTemp;
    User *pNew;
    pTemp = pHead;

    while (pTemp->pNext)
    {
        pTemp = pTemp->pNext;
        pNew = (User*)malloc(sizeof(User));
        strcpy(pNew->name,name);
        strcpy(pNew->phone,phone);
        pNew->pNext = NULL;
        pTemp->pNext = pNew;
    }
}

void SearchUser()
{
    User *pTemp;
    char name[20];
    printf("Type User Name : ");
    scanf("%s\n",name);

    pTemp = pHead;
    while (1)
    {
        if(strcmp(pTemp->name,name) == 0)
        {
            printf("Name : %s\n",pTemp->name);
            printf("Phone : %s\n",pTemp->phone);
            return;
        }

    }
    
}

