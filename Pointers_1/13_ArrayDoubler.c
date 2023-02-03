#include <stdio.h>

void dbler(int*,int);

int main(void)
{
    int size;
    int a[20];

    printf("Enter the number of array elements: ");
    scanf("%d",&size);

    printf("Enter the array elements: ");
    
    for(int i=0;i<size;i++)
        scanf("%d",a+i);

    dbler(a,size);

    for(int i=0;i<size;i++)
        printf("a[%d] or *(a+%d) = %d\n",i,i,*(a+i));

    return 0;
}

void dbler(int *a, int size)
{
    if(size==0)
        return;
    *a *= 2;
    dbler(a+1,size-1);
}