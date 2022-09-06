#include "LinkedListHead.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

User *pMakeNode()
{
    User *pTmp = (User*)malloc(sizeof(User));
    pTmp->pNext = NULL;
    return pTmp;
}

void AddUser(User **ppFirstNode,char username[],char userphone[])
{
    if(*ppFirstNode != NULL)
    {
        *ppFirstNode = pMakeNode();
        strcpy((*ppFirstNode)->name,username);
        strcpy((*ppFirstNode)->phone,userphone);
        printf("User Registeration Success!");
        return;
    }
    AddUser(&(*ppFirstNode)->pNext,username,userphone);
}


void SearchUser()
{
    char searchname[MAX] = {};
    User *pTemp = pFirstNode;

    printf("Input User Name : ");
    scanf("%s",&searchname);

    while (pTemp != NULL)
    {
        if(strcmp(pTemp->name,searchname) == 0)
        {
            printf("Name : %s\n",pTemp->name);
            printf("Phone : %s\n",pTemp->phone);
            break;
        }
        else if(pTemp->pNext == NULL)
        {
            if(strcmp(pTemp->name,searchname) == 0)
            {
                printf("Name : %s\n",pTemp->name);
                printf("Phone : %s\n",pTemp->phone);
                break;
            }
            else
            {
                printf("%s is not exist",searchname);
                break;
            }
        }
        pTemp = pTemp->pNext;
    }
}

void ModifyUser()
{
    char modifyname[MAX] = {};
    char modifyphone[MAX] = {};
    User *pTemp = pFirstNode;

    printf("Input Modify Name : ");
    scanf("%s",&modifyname);

    while (pTemp != NULL)
    {
        if(strcmp(pTemp->name,modifyname) == 0)
        {
            printf("Input Phone Number : ");
            scanf("%s",&modifyphone);
            strcpy(pTemp->phone,modifyphone);
            printf("Modify Success!\n");
            break;
        }
        else if(pTemp->pNext == NULL)
        {
            if(strcmp(pTemp->name,modifyname) == 0)
            {
                printf("Input Phone Number : ");
                scanf("%s",&modifyphone);
                strcpy(pTemp->phone,modifyphone);
                printf("Modify Success!\n");
                break;
            }
            else
            {
                printf("%s is not exist!\n",modifyname);
                return;
            }
        }
        pTemp = pTemp->pNext;
    }
}

void DeleteUser()
{
    char deletename[MAX]={};
    User *pPrev;
    User *pTemp = pFirstNode;

    printf("Input Name : ");
    scanf("%s",&deletename);

    if(strcmp(pTemp->name,deletename) == 0)
    {
        pFirstNode = pTemp->pNext;
        free(pTemp);
        printf("Delete Success!");
    }
    else
    {
        while(strcmp(pTemp->name,deletename) != 0)
        {
            pTemp = pTemp->pNext;
            pPrev = pPrev->pNext;
            pPrev = pFirstNode;
        }
        pPrev->pNext = pTemp->pNext;
        free(pTemp);
        printf("Delete Success!");
    }
}

void LoadFile()
{
    FILE *pLoadFile = fopen("C:\\Users\\nkwangwoo\\Desktop\\C\\Test6\\Test.txt","r+t");
    if(pLoadFile != NULL)
    {
        User *pMidNode = NULL;
        while (feof(pLoadFile) == 0)
        {
            pMidNode = (User*)malloc(sizeof(User));
            memset(pMidNode,0,sizeof(pMidNode));
            pMidNode->pNext = NULL;
            fscanf(pLoadFile,"%s %s\n",&pMidNode->name,&pMidNode->phone);

            if(pFirstNode == NULL)
                pFirstNode = pMidNode;
            else
            {
                User* pTemp = pFirstNode;
                while (pTemp->pNext != NULL)
                {
                    pTemp = pTemp->pNext;
                }
                pTemp->pNext = pMidNode;
            }
        }
    }
    else
    {
        printf("File Open Fail!");
        WriteFile();
        fclose(pLoadFile);
        return;
    }
}

void WriteFile()
{
    FILE *pWriteFile = fopen("C:\\Users\\nkwangwoo\\Desktop\\C\\Test6\\Test.txt","w+t");
    if(pFirstNode != NULL)
    {
        while (pFirstNode->pNext != NULL)
        {
            User *pTemp = pFirstNode;
            fprintf(pWriteFile,"\n%s %s\n",pTemp->name,pTemp->phone);
            pFirstNode = pFirstNode->pNext;
        }
        fprintf(pWriteFile,"\n%s %s\n",pFirstNode->name,pFirstNode->phone);
        free(pFirstNode);
        fclose(pWriteFile);
    }
}

int main()
{
    int choice = 0;
    char inputname[MAX] = {};
    char inputphone[MAX] = {};

    LoadFile();
    User *pTemp = pFirstNode;
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
            WriteFile();
            printf("========Program End========");
            break;
        }
        switch (choice)
        {
        case 1:
            printf("Input Name : ");
            scanf("%s",&inputname);
            printf("Input Phone Number : ");
            scanf("%s",&inputphone);
            AddUser(&pFirstNode,inputname,inputphone);
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
    
}