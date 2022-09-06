#include <stdio.h>

int main(int argc, char **argv)
{
    if(argc!=3)
    {
        printf("사용 방법: private_arg 이름 주민번호 \n");
        return 1;
    }

    printf("이  름 : %s\n",argv[1]);
    printf("주민번호 : %s\n",argv[2]);
    return 0;
}

