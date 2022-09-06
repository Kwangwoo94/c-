#include "SimpleListHead.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void AddUser(User* pUser)
{
    char buf[256] = {0};
    
    printf("Input Name : ");
    scanf("%s",buf);
    pUser->name = (char*)malloc(strlen(buf)+1);
    strcpy(pUser->name,buf);

    printf("Input Phone Number : ");
    scanf("%s",&pUser->phone);
}

void ReadFile(void)
{
    FILE *pFile = fopen("C:\\Users\\nkwangwoo\\Desktop\\C\\Test4\\Test.txt","r+t");
    User user;
    char TempBuffer[256] = {0};
    int i;
    
    if(pFile == NULL)
    {
        printf("File Open Error!");
        return;
    }

    while (feof(pFile) != 0)
    {
        fscanf(pFile,"%s",TempBuffer);
        user.name = (char*)malloc(sizeof(TempBuffer));
        strcpy(user.name,TempBuffer);
        fscanf(pFile,"%s",&user.phone);

        AddNode(user);
        memset(TempBuffer,0,sizeof(TempBuffer));
    }
    fclose(pFile);
}

void DisplayUser(User* pUser)
{
    printf("Name : %s\n",pUser->name);
    printf("Phone : %s\n",pUser->phone);
}

void AddNode(User User)
{
    Node* pNew = (Node*)malloc(sizeof(Node));
    pNew->user = User;
    pNew->pNext = NULL;
    
    if(pHead == NULL)
        pHead = pNew;
    else
        pTail->pNext = pNew;
    
    pTail = pNew;
}

void DeleteAllNode(void)
{
    Node* pCur = pHead;
    Node* pDel = NULL;

    if(pHead == NULL)
        return;

    while (pCur != NULL)
    {
        pDel = pCur;
        pCur = pCur->pNext;
        free(pDel);
    }
    pHead = pTail = NULL;
}

void DeleteUserNode(User* pUser)
{
    if(pUser->name != NULL)
    {
        free(pUser);
    }
}

void DeleteUser(void)
{
    char buf[256] = {0};
    Node* pRemove = NULL;
    Node* pCur = pHead;
    Node* pBefore = pHead;

    if(pHead == NULL)
        return;
    
    printf("Input Name : ");
    scanf("%s",buf);

    if(strcmp(pHead->user.name,buf) == 0)
    {
        pRemove = pHead;
        pHead = pHead->pNext;
    }
    else
    {
        while (pCur != NULL)
        {
            if(strcmp(buf,pCur->user.name) == 0)
            {
                pRemove = pCur;
                pBefore->pNext = pCur->pNext;
                break;
            }
            pBefore = pCur;
            pCur = pCur->pNext;
        }
    }
    if(pRemove != NULL)
    {
        DeleteUserNode(&(pRemove->user));
        free(pRemove);
    }
}

void ModifyUser(void)
{
    char buf[256] = {0};
    Node* pCur = pHead;

    Node* pNew = (Node*)malloc(sizeof(Node));
    pNew->pNext = NULL;

    printf("Input Name : ");
    scanf("%s",buf);

    while (pCur != NULL)
    {
        if(strcmp(pCur->user.name,buf) == 0)
        {
            AddUser(&pNew->user);
            pNew->pNext = pCur->pNext;
            pCur->pNext = pNew;
            break;
        }
        pCur = pCur->pNext;
    }
}

void SearchUser(void)
{
    char name[256] = {0};
    Node* pCur = pHead;

    printf("Input Name : ");
    scanf("%s",name);

    while (pCur != NULL)
    {
        if(strcmp(pCur->user.name,name) == 0)
        {
            DisplayUser(&(pCur->user));
            return;
        }
        pCur = pCur->pNext;
    }
    printf("%s is not exist\n",name);
}

int main(void)
{
    int choice = 0;
    User* pUser;
    ReadFile();
    

    while (1)
    {
        printf("\n===========menu===========\n");
        printf("1. Add User\n");
        printf("2. Search User\n");
        printf("3. Modify User\n");
        printf("4. Delete User\n");
        printf("5. Quit\n");
        printf("Type Number : ");

        scanf("%d",&choice);
        if(choice == 5)
        {
            printf("========Program End========");
            break;
        }
        switch (choice)
        {
        case 1:
            AddUser(pUser);
            break;
        case 2:
            SearchUser();
            break;
        case 3:
            ModifyUser();
            break;
        case 4:
            DeleteUser();
            break;
        default:
            printf("No menu, Choose again");
            break;
        }    
    }
    DeleteNode();

    return 0;
}