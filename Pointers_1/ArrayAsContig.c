//The program demonstrates the contiguous nature of an array

#include <stdio.h>

int main(void)
{
    int a[10];
    for(int i=0;i<10;i++)
        printf("Address of element a[%d] = %d\n",i,(a+i));
    return 0;
}