#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int size = 5;
    int sectors = 4;
    int *p = NULL;

    p = (int*)calloc(sectors,size);         //p = (<data_type>)calloc(<number of byte_sectors>,<size>);

    if(p==NULL)
    {
        printf("Memory not allocated :(");
        return (-1);
    }

    printf("Enter %d elements: ",sectors);
    for(int i=0;i<sectors;i++)
        scanf("%d",(p+i));

    int max = 0;

    for(int i=0;i<sectors;i++)
    {
        if(*(p+i)>max)
            max = *(p+i);
    }

    printf("The greatest number is: %d",max);
    return 0;
}