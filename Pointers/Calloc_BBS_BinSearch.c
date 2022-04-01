#include <stdio.h>
#include <stdlib.h>

int* input(int*);
void bbs(int*,int);
void ls(int*,int);

int main(void)
{
    int sector;
    int *a = NULL;
    
    a = input(&sector);
    bbs(a,sector);

    printf("Sorted array is: ");
    for(int i=0;i<sector;i++)
        printf("%d ",*(a+i));
    printf("\n");

    ls(a,sector);

    return 0;
}

int* input(int *sector)
{
    printf("Enter the number of elements required: ");
    scanf("%d",sector);
    
    int *a = NULL;
    a = (int*)calloc(*sector,sizeof(int));

    printf("Enter the elements: ");
    for(int i=0;i<*sector;i++)
        scanf("%d",(a+i));

    return a; 
}

void bbs(int *a,int sector)
{
    for(int i=0;i<(sector-1);i++)
    {
        for(int j=0;j<(sector-i-1);j++)
        {
            if(*(a+j)>*(a+j+1))
            {
                *(a+j) += *(a+j+1);
                *(a+j+1) = *(a+j)-*(a+j+1);
                *(a+j) -= *(a+j+1);
            }
        }
    }
}

void ls(int *a,int sector)
{
    int key = 0;
    
    printf("Enter the element to be searched: ");
    scanf("%d",&key);

    int first = 0;
    int last = sector-1;

    while(first<=last)
    {
        int mid = (first+last)/2;

        if(*(a+mid)==key)
        {
            printf("Element found at %d",mid);
            return;
        }
        else if(key>*(a+mid))
            first = mid+1;
        else if(key<*(a+mid))
            last = mid-1;
    }
    printf("Element %d not found",key);
}