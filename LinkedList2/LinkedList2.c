#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "LinkedList2.h"

void pInputName()
{
    char _pBuf[CHAR_MAX] = {0,};
    int _nBuflen = 0;
    memset(_pBuf,0x00,_nBuflen);
    printf("Input Name : ");
    scanf("%s",_pBuf);
    return;
}

stUser *pSearchUser(stUser *_pHead,char *_pszInputName)
{
    while (_pHead != NULL)
    {
        if(strcmp(_pHead->szName,_pszInputName) == 0)
        {
            return _pHead;
            break;
        }
        _pHead = _pHead->pNext;
    }    
    return NULL;   
}

void AddUser(stUser **_ppHead,char *_pszInputName)
{
    stUser *pTemp = pSearchUser(*_ppHead,_pszInputName);
    if(pTemp == NULL)
    {
        stUser *pNew = (stUser*)malloc(sizeof(stUser));
        pNew->pNext = NULL;
        strcpy(pNew->szName,_pszInputName);
        char *pszInputPhone = (char*)malloc(sizeof(char)*sizeof(pszInputPhone));
        printf("Input Phone Number : ");
        scanf("%s",pszInputPhone);
        strcpy(pNew->szPhone,pszInputPhone);
        free(pszInputPhone);
        if(*_ppHead == NULL)
        {
            *_ppHead = pNew;
            printf("User Register Success!");
            return;
        }
        else
        {
            stUser *pTest = *_ppHead;
            while(pTest->pNext != NULL)
            {
                pTest = pTest->pNext;
            }
            pTest->pNext = pNew;
            printf("User Register Success!");
            return;
        }
    }
    else
    {
        printf("%s is already exist!\n",_pszInputName);
        _pszInputName = NULL;
        _pszInputName = (char*)malloc(sizeof(char)*sizeof(_pszInputName));
        _pszInputName = pInputName();
        AddUser(&(*_ppHead)->pNext,_pszInputName);
    }
}

void ModifyUser(stUser *_pHead,char *_pszInputName)
{
    stUser *pTemp = pSearchUser(_pHead,_pszInputName);
    
    if(pTemp != NULL)
    {
        printf("Input Modify Phone Number : ");
        char *pszModifyPhone = (char*)malloc(sizeof(char)*sizeof(pszModifyPhone));
        scanf("%s",pszModifyPhone);
        strcpy(pTemp->szPhone,pszModifyPhone);
        free(pszModifyPhone);
        printf("%s Modify Success!",pTemp->szName);
        return;
    }
    else
    {
        printf("%s is not exist",_pszInputName);
        return;
    }
}

void DeleteUser(stUser *_pHead,char *_pszInputName)
{
    stUser *pTemp = pSearchUser(_pHead,_pszInputName);

    if(_pHead == NULL)
    {
        printf("List is not exist");
        return;
    }
    else if(pTemp == NULL)
    {
        printf("%s is not exist",_pszInputName);
        return;
    }
    while (_pHead->pNext != NULL)
    {
        if(_pHead == pTemp)
        {
            pTemp = _pHead;
            _pHead = _pHead->pNext;
            free(pTemp);
            printf("Delete Success");
            break;
        }
        else if(_pHead->pNext == pTemp)
        {
            pTemp = _pHead->pNext;
            _pHead->pNext = _pHead->pNext->pNext;
            free(pTemp);
            printf("Delete Success");
            break;
        }
        _pHead = _pHead->pNext;
    }
}

void WriteFile(stUser *_pHead)
{
    FILE *pWriteFile = fopen("C:\\Users\\nkwangwoo\\Desktop\\C\\LinkedList2\\Test.txt","w+t");
    if(_pHead != NULL)
    {
        while (_pHead->pNext != NULL)
        {
            fprintf(pWriteFile,"%s %s\n",_pHead->szName,_pHead->szPhone);
            _pHead = _pHead->pNext;
        }
        fprintf(pWriteFile,"%s %s\n",_pHead->szName,_pHead->szPhone);
        fclose(pWriteFile);     
    }
}

stUser *pLoadFile(stUser *_pHead)
{
    FILE *pLoadFile = fopen("C:\\Users\\nkwangwoo\\Desktop\\C\\LinkedList2\\Test.txt","r+t");
    if(pLoadFile != NULL)
    {
        while(feof(pLoadFile) == 0)
        {
            stUser *pMidNode = (stUser*)malloc(sizeof(stUser));
            memset(pMidNode,0,sizeof(pMidNode));
            pMidNode->pNext = NULL;
            fscanf(pLoadFile,"%s %s\n",&pMidNode->szName,&pMidNode->szPhone);
            if(_pHead == NULL)
            {
                _pHead = pMidNode;
            }
            else
            {
                stUser *pTemp = _pHead;
                while(pTemp->pNext != NULL)
                {
                    pTemp = pTemp->pNext;
                }
                pTemp->pNext = pMidNode;
            }
        }
        fclose(pLoadFile);
        return _pHead;
    }
    else
    {
        WriteFile(_pHead);
        return NULL;
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

int main(void)
{
    stUser *pHead = NULL;
    pHead = pLoadFile(pHead);
    while (1)
    {
        int choice = 0;
        stUser *pSearch = NULL;
        Menu();
        scanf("%d",&choice);
        char *pszInputAddName;
        char *pszInputSearchName;
        char *pszInputModifyName;
        char *pszInputDeleteName;
        if(choice == 5)
        {
            WriteFile(pHead);
            printf("========Program End=========");
            break;
        }
        switch (choice)
        {
            case 1:
                pszInputAddName = (char*)malloc(sizeof(char)*sizeof(pszInputAddName));
                pszInputAddName = pInputName();
                AddUser(&pHead,pszInputAddName);
                free(pszInputAddName);
                break;
            case 2:
                pszInputSearchName = (char*)malloc(sizeof(char)*sizeof(pszInputSearchName));
                pszInputSearchName = pInputName();
                pSearch = pSearchUser(pHead,pszInputSearchName);
                if(pSearch != NULL)
                {
                    printf("name : %s\n",pSearch->szName);
                    printf("phone : %s\n",pSearch->szPhone);
                }
                else
                {
                    printf("%s is not exist",pszInputSearchName);
                }
                free(pszInputSearchName);
                break;
            case 3:
                pszInputModifyName = (char*)malloc(sizeof(char)*sizeof(pszInputModifyName));
                pszInputModifyName = pInputName();
                ModifyUser(pHead,pszInputModifyName);
                free(pszInputModifyName);
                break;
            case 4:
                pszInputDeleteName = (char*)malloc(sizeof(char)*sizeof(pszInputDeleteName));
                pszInputDeleteName = pInputName();
                DeleteUser(pHead,pszInputDeleteName);
                free(pszInputDeleteName);
                break;
            default:
                printf("No Menu Number. Input Menu Number again");
                break;
        }
    }
}