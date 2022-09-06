#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,i;
    int *arr;

    printf("Enter the number, to memory alloc : ");
    scanf("%d",&size);

    arr=(int*)calloc(size,sizeof(int));
    //arr=(int*)malloc(size*sizeof(int));
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<size;i++)
        printf("%d번째 요소 : %d\n",i,arr[i]);

    free(arr);
    return 0;
}