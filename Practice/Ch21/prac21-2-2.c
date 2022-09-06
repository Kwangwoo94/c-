#include <stdio.h>
#include <string.h>

void concat3(char *str1,char *str2,char *str3,char *constr);

int main(void)
{
    char str1[50];
    char str2[50];
    char str3[50];
    char constr[150];

    printf("3개의 문자열 입력 : ",str1,str2,str3);
    scanf("%s %s %s",str1,str2,str3);
    concat3(str1,str2,str3,constr);
    puts(constr);

    return 0;
}

void concat3(char *str1,char *str2,char *str3,char *constr)
{
    if(strcmp(str1,str2)==1)
    {
        if(strcmp(str1,str3)==1)
        {
            strcpy(constr,str1);
            if(strcmp(str2,str3)==1)
            {
                strcat(constr,str2);
                strcat(constr,str3);
            }
            else
            {
                strcat(constr,str3);
                strcat(constr,str2);
            }
        }
        else
        {
            strcpy(constr,str3);
            if(strcmp(str1,str2)==1)
            {
                strcat(constr,str1);
                strcat(constr,str2);
            }
            else
            {
                strcat(constr,str2);
                strcat(constr,str1);
            }
        }
    }
    else
    {
        if(strcmp(str2,str3)==1)
        {
            strcpy(constr,str2);
            if(strcmp(str1,str3)==1)
            {
                strcat(constr,str1);
                strcat(constr,str3);
            }
            else
            {
                strcat(constr,str3);
                strcat(constr,str1);
            }
        }
        else
        {
            strcpy(constr,str3);
            if(strcmp(str1,str2)==1)
            {
                strcat(constr,str1);
                strcat(constr,str2);
            }
            else
            {
                strcat(constr,str2);
                strcat(constr,str1);
            }
        }
    }
}