#include "ListTestHead.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 100

User *pHead = NULL;

void Init(User *pUser)
{
    sprintf(pUser->name,"");
    sprintf(pUser->phone,"");
    pUser->pNext = NULL;
}

void AddUser(User *user)
{
    User *pTempUser = (User*)malloc(sizeof(User));
    memset(&pTempUser->name,0,sizeof(pTempUser->name));
    char name[20] = {};
    User *pTemp = user;
    Temp temp[MAX_SIZE] = {};
    int i,j = 0;
    FILE *pFile = fopen("C:\\Users\\nkwangwoo\\Desktop\\C\\Test2\\Test.txt","a+t");
    
    if(pFile == NULL)
    {
        printf("File Open Error\n");
        return;
    }

    while (pTemp->pNext != NULL)
    {
        pTemp = pTemp->pNext;
        if(pTemp != NULL)
        {
            break;
        }
    }
    getchar();
    printf("Input Name : ");
    fgets(pTempUser->name,sizeof(pTempUser->name),stdin);
    pTempUser->name[strlen(pTempUser->name)-1] = '\0';
    while (feof(pFile) == 0)
    {
        printf("======file scan=====");
        fscanf(pFile,"%s%s",&temp[i].name,&temp[i].phone);
        if(strcmp(pTempUser->name,temp[i].name) == 0)
        {
            while (strcmp(pTempUser->name,temp[i].name) != 0)
            {
                printf("%s is already exist.\n",pTempUser->name);
                printf("Input Name : ");
                fgets(pTempUser->name,sizeof(pTempUser->name),stdin);
                pTempUser->name[strlen(pTempUser->name)-1] = '\0';
            }
            break;
        }
        i++;                 
    }
    /*while(strcmp(pTempUser->name,temp[j].name) != 0)
    {
        if(strcmp(pTempUser->name,temp[j].name) == 0)
        {
            printf("%s is already exist.\n",pTempUser->name);
            printf("Input Name : ");
            fgets(pTempUser->name,sizeof(pTempUser->name),stdin);
            pTempUser->name[strlen(pTempUser->name)-1] = '\0';
        }
        j++;
    }*/
    pTempUser->name[strlen(pTempUser->name)] = '\n';
    printf("Input Phone Number : ");
    fgets(pTempUser->phone,sizeof(pTempUser->phone),stdin);
    fflush(stdin);
    pTemp->pNext = pTempUser;
    fprintf(pFile,"%s%s\n",pTempUser->name,pTempUser->phone);
    printf("User Registration Success!\n");
    free(pTempUser);
    fclose(pFile);
}

void SearchUser(User* user)
{
    char name[20] = {};
    printf("Input Name : ");
    getchar();
    fgets(name,sizeof(name),stdin);
    

    FILE *pLoadFile = fopen("C:\\Users\\nkwangwoo\\Desktop\\C\\Test2\\Test.txt","r+t");
    if(pLoadFile == NULL)
    {
        printf("File Open Error\n");
        return;
    }
    Temp temp[MAX_SIZE] = {};
    User *pTemp = user->pNext;
    
    while (pTemp != NULL)
    {
        // 노드 상에 존재시
        if(strcmp(pTemp->name,name) == 0)
        {
            printf("Name : %s\n",pTemp->name);
            printf("Phone : %s\n",pTemp->phone);
            break;
        }
        // 노드를 돌았을때 노드상의 데이터가 없을 경우
        else if(pTemp->pNext == NULL)
        {
            int i,j=0;
            name[strlen(name)-1]='\0';
            while (feof(pLoadFile) == 0)
            {
                fscanf(pLoadFile,"%s%s",&temp[i].name,&temp[i].phone);
                i++;                 
            }
            int count = i;   
            for(j=0;j<count;j++)
            {
                if(strcmp(temp[j].name,name) == 0)
                {
                    printf("Name : %s\n",temp[j].name);
                    printf("Phone : %s\n",temp[j].phone);
                    break;
                }    
            }
            if(pTemp->pNext == NULL && strcmp(temp[j].name,name) != 0)
            {
                printf("The User is not exist!\n");
                break;
            }
        }
        pTemp = pTemp->pNext;
    }
    if(pTemp == NULL)
    {
        int i,j=0;
        name[strlen(name)-1]='\0';
        while (feof(pLoadFile) == 0)
        {
            fscanf(pLoadFile,"%s%s",&temp[i].name,&temp[i].phone);
            i++;                 
        }
        int count = i;   
        for(j=0;j<count;j++)
        {
            if(strcmp(temp[j].name,name) == 0)
            {
                printf("Name : %s\n",temp[j].name);
                printf("Phone : %s\n",temp[j].phone);
                return;
            }    
        }
        if(strcmp(temp[j].name,name) != 0)
        {
            printf("The User is not exist!\n");
            return;
        }
    }
    fclose(pLoadFile);  
}

void ModifyUser(User* user)
{
    char name[20];
    printf("Input Name : ");
    getchar();
    fgets(name,sizeof(name),stdin);
    User *pTemp = user->pNext;
    FILE *pFile = fopen("C:\\Users\\nkwangwoo\\Desktop\\C\\Test2\\Test.txt","w+t");
    if(pFile == NULL)
    {
        printf("File Open Error!");
        return;
    }
    while (pTemp != NULL)
    {
        if(strcmp(pTemp->name,name) == 0)
        {
            printf("Input Phone Number : ");
            fgets(pTemp->phone,sizeof(pTemp->phone),stdin);
        }
        else if(pTemp->pNext == NULL)
        {
            printf("The User is not exist!\n");
            return;
        }
        fwrite(pTemp,sizeof(User),1,pFile);
        printf("Modify Success!\n");
        pTemp = pTemp->pNext;
    }
    fclose(pFile);
}

void DeleteUser(User* user)
{
    char name[20];
    printf("Input Name : ");
    getchar();
    fgets(name,sizeof(name),stdin);
    User *pTemp = user->pNext;
    FILE *pFile = fopen("C:\\Users\\nkwangwoo\\Desktop\\C\\Test2\\Test.txt","w+t");
    if(pFile == NULL)
    {
        printf("File Open Error!");
        return;
    }
    while (pTemp != NULL)
    {
        if(strcmp(pTemp->name,name) == 0)
        {
            strcpy(pTemp->name,"");
            strcpy(pTemp->phone,"");
            fputs(pTemp->name,pFile);
            fputs(pTemp->phone,pFile);
            printf("Delete Success!\n");
        }
        else if(pTemp->pNext == NULL)
        {
            printf("The User is not exist!\n");
            return;
        }
        fwrite(pTemp->name,sizeof(pTemp->name),1,pFile);
        fwrite(pTemp->phone,sizeof(pTemp->phone),1,pFile);
        pTemp = pTemp->pNext;
    }
    fclose(pFile);
}

int main()
{
    int choice = 0;
    User *pUser = (User*)malloc(sizeof(User));
    
    Init(pUser);
    
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
            SearchUser(pUser);
            break;
        case 3:
            ModifyUser(pUser);
            break;
        case 4:
            DeleteUser(pUser);
            break;
        default:
            printf("No menu, Choose again");
            break;
        }    
    }
    User *pTemp = pUser;
    User *pTemp2;
    while (pTemp != NULL)
    {
        pTemp2 = pTemp->pNext;
        free(pTemp);
        pTemp = pTemp2;
    }
    return 0;
}