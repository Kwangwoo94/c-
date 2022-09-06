#include <stdio.h>

int main(void)
{
    char sel;

    printf("오전(M), 오후(A), 저녁(E) \n");
    printf("입력 :");

    scanf("%c", &sel);

    switch (sel)
    {
    case 'M':
    case 'm':
        printf("Morning. \n");
        break;
    case 'A':
    case 'a':
        printf("Afternoon. \n");
        break;
    case 'E':
    case 'e':
        printf("Evening. \n");
        break;
    }
    return 0;
}