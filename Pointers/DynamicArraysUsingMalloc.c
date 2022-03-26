#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p;
    int size = 10;
    p = (int*)malloc(size);        //(<cast_type>)malloc(<size>) = 4 bytes(sizeof(int)) / 4 bytes = 1 integer element can be stored

    if(p==NULL)
    {
        printf("Memory not allocated!");
        return (-1);
    }

    printf("Enter %d variables: ",(size/sizeof(int)));
    for(int i=0;i<(size/sizeof(int));i++)
        scanf("%d",(p+i));        //p+i is same as p[i]
    printf("\n");
    for(int i=0;i<(size/sizeof(int));i++)
        printf("%d\n",*(p+i));        //*(p+i) is same as *p[i]

    return 0;
}