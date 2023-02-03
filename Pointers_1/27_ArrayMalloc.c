#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p = (int*)malloc(5*sizeof(int));         //sizeof(int)*5 for an array of 5 elements
    printf("Address pointed to by p: %d\n",p);
    
    printf("Enter 5 array values: ");
    
    for(int i=0;i<5;i++)
        scanf("%d",(p+i));

    printf("\nThe entered array values are: \n");

    for(int i=0;i<5;i++)
        printf("%d\n",*(p+i));  

    free(p);

    return 0;
}