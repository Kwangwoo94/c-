#include "ListTestHead.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

Node *CreateNode(void)
{
    Node *pNew = (Node*)malloc(sizeof(Node));
    printf("User Name : ");
    scanf("%s",pNew->user.name);
    printf("User Phone Number : ");
    scanf("%s",pNew->user.phone);
    pNew->pNext = NULL;
    return pNew;
}

void AddUser(Node **pHead,Node *pNew)
{
    Node *pTemp = *pHead;
    Node *p;

    if(*pHead == NULL)
    {
        (*pHead) == pNew;
        pNew->pNext = NULL;
    }
    else
    {
        while (pTemp != NULL)
        {
            p = pTemp;
            pTemp = pTemp->pNext;
        }
        pTemp = pNew;
        p->pNext = pTemp;
    }
}

Node *SearchUser(Node *pHead)
{
    Node *pTemp = pHead;
    User user;
    printf("Type User Name : ");
    scanf("%s",user.name);

    while (pTemp != NULL)
    {
        if(strcmp(pTemp->user.name,user.name))
            return pTemp;
        pTemp = pTemp->pNext;
    }
    return NULL;
}

void DeleteUser(Node **pHead,Node *remove)
{
    Node *pTemp = *pHead;
    Node *p;
    
    if(pTemp == NULL)
        return;
    else
    {
        if(*pHead == remove)
        {
            *pHead = (*pHead)->pNext;
            free(remove);
        }
        else
        {
            while (pTemp != NULL)
            {
                if(pTemp == remove)
                {
                    p->pNext = remove->pNext;
                    free(remove);
                    return;
                }
                p = pTemp;
                pTemp = pTemp->pNext;
            }    
        }
    }
}

void ModifyUser(Node **pHead,Node *modify)
{
    return;
}

void WriteFile(Node *pHead)
{
    Node *pTemp = pHead;
    FILE *pFile = fopen("C:\\Users\\nkwangwoo\\Desktop\\C\\C숙제\\Test.txt","wt");

    if(pTemp == NULL)
        return;
    else
    {
        while (pTemp != NULL)
        {
            fputs("Name : ",pFile);
            fputs(pTemp->user.name,pFile);
            fputs("\n",pFile);
            fputs("Phone : ",pFile);
            fputs(pTemp->user.phone,pFile);
            pTemp = pTemp->pNext;
        }
        
    }
}


int main()
{
    Node *pHead = NULL;
    int choice = 0;
    int input = 0;
    Node *pTemp = NULL;
    int i = 0;

    FILE *pFile = fopen("C:\\Users\\nkwangwoo\\Desktop\\C\\C숙제\\Test.txt","rt");

    if(pFile == NULL)
    {
        printf("File is not exist. \n");
        return -1;
    }

    while (feof(pFile) == 0)
    {
        char ch;
        ch = fgetc(pFile);
        if(ch == ':')
        {
            char name[20];
            char phone[20];

            if(i%2 == 0)
                fgets(name,sizeof(name),pFile);
            else if(i%2 == 1)
            {
                int j = 0;
                Node *pNew = (Node*)malloc(sizeof(Node));
                pNew->pNext = NULL;
                fgets(phone,sizeof(phone),pFile);
                for(j = 0;j < 20;j++)
                {
                    if(name[j] == '\n')
                        name[j] = 0;
                    if(phone[j] == '\n')
                        phone[j] == 0;
                }
                strncpy(pNew->user.name,name,sizeof(pNew->user.name));
                strncpy(pNew->user.phone,phone,sizeof(pNew->user.phone));
                AddUser(&pHead,pNew);
            }
            i++;
        }
    }
    fclose(pFile);

    while(1)
    {
        printf("=========Menu=========\n");
        printf("1. Register User\n");
        printf("2. Delete User\n");
        printf("3. Search User\n");
        printf("4. Modify User\n");
        printf("5. Program Exit\n");
        printf("Choose menu : ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            AddUser(&pHead,CreateNode());
            break;
        case 2:
            DeleteUser(&pHead,SearchUser(pHead));
            break;
        case 3:
            pTemp = SearchUser(pHead);
            if(pTemp != NULL)
            {
                printf("Name : %s\n",pTemp->user.name);
                printf("Phone : %s\n",pTemp->user.phone);
            }
            else
            {
                printf("The User is not exist.\n");
            }
            break;
        case 4:
            ModifyUser(&pHead,SearchUser(pHead));
            break;
        case 5:
            printf("Program End\n");
            break;
        default:
            printf("Not exist menu, Choose again\n");
            WriteFile(pHead);
            break;
        }
        if(choice == 5)
            break;
    }
    return 0;
}