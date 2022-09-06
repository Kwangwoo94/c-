#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "LinkedList3.h"

char *pInputName(char *pBuf,int nBuflen)
{
    strcpy(pBuf,"");
    pBuf[nBuflen] = '\0';
    char name[MAX] = {0,};
    printf("Input Name : ");
    scanf("%s",name);
    return strncpy(pBuf,name,nBuflen-1);
}

User *pSearchUser(User* pHead,char szInputName[])
{
    User* pCurr = pHead->pNext;
    while (pCurr != NULL)
    {
        if(strcmp(pCurr->name,szInputName) == 0)
        {
            return pCurr;
            break;
        }
        pCurr = pCurr->pNext;
    }
    return NULL; 
}

void AddUser(User* pHead, char szInputName[])
{
    char szInputPhone[MAX] = {0,};
    User* pNew = (User*)malloc(sizeof(User));
    strcpy(pNew->name,szInputName);
    printf("Input Phone Number : ");
    scanf("%s",szInputPhone);
    strcpy(pNew->phone,szInputPhone);
    pNew->pNext = pHead->pNext;
    pHead->pNext = NULL;
    return;
}

void DeleteUser(User* pHead,char szInputName[])
{
    User* pDelete = pHead->pNext;
    pHead->pNext = pDelete->pNext;
    free(pDelete);
    return;
}

void ModifyUser(User* pHead,char szInputName[])
{
    User *pTemp = pSearchUser(pHead,szInputName);
    char szModifyphone[MAX] = {};
    if(pTemp != NULL)
    {
        printf("Input Modify Phone Number : ");
        scanf("%s",&szModifyphone);
        strcpy(pTemp->phone,szModifyphone);
        printf("%s Modify Success!",pTemp->name);
        return;
    }
    else
    {
        printf("%s is not exist",szInputName);
        return;
    }
}

void MemoryClean(User* pHead)
{
    User* pTarget = pHead;
    User* pTemp =   pTarget;
    while (pTarget != NULL)
    {
        pTemp = pTemp->pNext;
        free(pTarget);
        pTarget = pTemp;
    }
}

void Menu()
{
    printf("\n===========menu===========\n");
    printf("1. Add User\n");
    printf("2. Search User\n");
    printf("3. Modify User\n");
    printf("4. Delete User\n");
    printf("5. Quit\n");
    printf("Input Menu Number : ");
}

int main()
{
    int choice = 0;
    User *pHead = (User*)malloc(sizeof(User));
    pHead->pNext = NULL;

    while (1)
    {
        User *pTest;
        Menu();
        scanf("%d",&choice);
        if(choice == 5)
        {
            MemoryClean(pHead);
            printf("========Program End=========");
            break;
        }
        switch (choice)
        {
        case 1:
            char szInputAddName[MAX];
            AddUser(pHead,pInputName(szInputAddName,sizeof(szInputAddName)));
            break;
        case 2:
            char szInputSearchName[MAX];
            pTest = pSearchUser(pHead,pInputName(szInputSearchName,sizeof(szInputSearchName)));
            if(pTest != NULL)
            {
                printf("name : %s\n",pTest->name);
                printf("phone : %s\n",pTest->phone);
            }
            else
            {
                printf("%s is not exist",szInputSearchName);
            }
            break;
        case 3:
            char szInputModifyName[MAX];
            ModifyUser(pHead,pInputName(szInputModifyName,sizeof(szInputModifyName)));
            break;
        case 4:
            char szInputDeleteName[MAX];
            DeleteUser(pHead,pInputName(szInputDeleteName,sizeof(szInputDeleteName)));            
            break;
        default:
            printf("No Menu Number. Choose again");
            break;
        }
    }
    
    
}