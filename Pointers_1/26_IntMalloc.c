#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p;
    
    p = (int*)malloc(sizeof(int));  //allocate a memory block in the size of int data type
    *p = 10;

    printf("Address of the memory block: %d\n",p);
    printf("Integer = %d\n",*p);

    return 0;
}