#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;

    printf("Enter the size of the required array: ");
    scanf("%d",&n);

    int *a = (int*)calloc(n,sizeof(int));

    printf("Enter %d integer values: ",n);
    for(int i=0;i<n;i++)
        scanf("%d",(a+i));

    printf("\n");

    for(int i=0;i<n;i++)
        printf("a[%d] = %d\n",i,*(a+i));
    
    free(a);
    return 0;
}