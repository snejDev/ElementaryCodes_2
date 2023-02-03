//increments on a is invalid because a is a constant pointer eg. a++
//however it can be assigned to another pointer like p nd performed

#include <stdio.h>

int main(void)
{
    int a[] = {1,2,3,4,5};

    for(int i=0;i<5;i++)
    {
        printf("Address of a[%d] = %d\n",i,(a+i));
        printf("*a+%d or a[%d] = %d\n",i,i,*(a+i));
    }
    return 0;
}