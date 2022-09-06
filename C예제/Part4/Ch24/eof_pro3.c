#include <stdio.h>

int main(void)
{
    int state; //error 체크 변수
    char ch;

    /*읽기 전용 파일 개방*/
    FILE* file=fopen("Test.txt","wb");
    if(file==NULL)
    {
        printf("file open error!\n");
        return 1;
    }

    fputc('1',file);
    fputc((char)255,file); //char 형으로 형 변환
    fputc('2',file);

    /*파일의 종결*/
    state=fclose(file);
    if(state!=0)
    {
        printf("file close error!\n");
        return 1;
    }

    /*읽기 전용 파일 개방*/
    file=fopen("Test.txt","rb");
    if(file==NULL)
    {
        printf("file open error!\n");
        return 1;
    }

    while (1)
    {
        ch=fgetc(file);
        if(feof(file)!=0)
            break;
        printf("data : %c\n",ch);
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