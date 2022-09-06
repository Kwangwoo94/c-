#include <stdio.h>

int main(void)
{
    int state; //error 체크 변수
    char* pState;
    char str[20];

    /*읽기 전용 파일 개방*/
    FILE* file=fopen("Test.txt","rt");
    if(file==NULL)
    {
        printf("file open error!\n");
        return 1;
    }

    /*fscanf 함수의 활용*/
    while (1)
    {
        pState=fgets(str,sizeof(str),file);
        if(pState==NULL)
            break;
        fputs(str,stdout);
    }

    /*파일의 종결*/
    state=fclose(file);
    if(state!=0)
    {
        printf("file close error!\n");
        return 1;
    }
    return 0;
}