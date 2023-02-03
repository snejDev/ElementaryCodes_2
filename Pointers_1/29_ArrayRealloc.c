#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 5;
    int *a = (int*)calloc(n,sizeof(int));

    printf("Enter 5 elements: ");

    for(int i=0;i<5;i++)
        scanf("%d", (a+i));

    printf("\n");
    printf("Memory Extension\n");

    int *b = (int*)realloc(a,(2*n));

    printf("Memory address of previously allocated block: %x\n",a);
    printf("Memory address of the new block: %x\n",b);

    printf("Enter 5 more elements: ");
    for(int i=5;i<10;i++)
        scanf("%d",(a+i));
    
    printf("The elements are: \n");
    for(int i=0;i<10;i++)
        printf("%d\n",*(a+i));

    free(a);
    free(b);

    return 0;
}