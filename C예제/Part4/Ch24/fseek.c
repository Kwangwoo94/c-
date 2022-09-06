#include <stdio.h>

int main(void)
{
    char buf[10];
    
    /*파일 생성*/
    FILE * file=fopen("Test.txt","wt");
    fputs("1234abcd56789",file);
    fclose(file);

    /*Random Access를 위해 다시 개방*/
    file=fopen("Test.txt","rt");

    /*파일 위치 지시자 초기 설정*/
    fgets(buf,7,file);
    printf("%s\n",buf);

    /**** 파일 위치 지시자 이동 ****/
    fseek(file,2,SEEK_CUR);
    //fseek(file,-2,SEEK_CUR);
    //fseek(file,2,SEEK_SET);
    //fseek(file,-2,SEEK_END);
    /*****************************/

    printf("%c\n",fgetc(file));
    fclose(file);

    return 0;
}