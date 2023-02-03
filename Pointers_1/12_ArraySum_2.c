#include <stdio.h>

int sum(int*,int);

int main(void)
{
    int size;
    int a[20];

    printf("Enter the number of elements: ");
    scanf("%d",&size);
    
    printf("Enter the array elements: ");
    for(int i=0;i<size;i++)
        scanf("%d",a+i);
    
    printf("Sum of array elements: %d",sum(a,size));
    
    return 0;
}

int sum(int *a, int size)
{
    if(size==0)
        return 0;
    return (*a+sum(a+1,size-1));
}