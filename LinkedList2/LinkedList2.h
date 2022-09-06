#ifndef _LINK_LIST_H_
#define _LINK_LIST_H_

typedef struct stUser
{
    char szName[CHAR_MAX];
    char szPhone[CHAR_MAX];
    struct stUser *pNext;
    
}stUser;

char *pInputName(char *_pBuf,int _nBuflen);
void AddUser(stUser **_ppHead,char *_pszInputName);
stUser *pSearchUser(stUser *_pHead,char *_pszInputName);
void ModifyUser(stUser *_pHead,char *_pszInputName);
void DeleteUser(stUser *_pHead,char *_szInputName);
void WriteFile(stUser *_pHead);
stUser *pLoadFile(stUser *_pHead);
void Menu();

#endif