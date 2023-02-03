//This program prints the elements of an array plying function pointers

#include <stdio.h>

void print(int *a)
{
    for(int i=0;i<3;i++)
        printf("a[%d] = %d\n",i,*(a+i));
}

int main(void)
{
    int a[3] = {1,2,3};
    void (*p)(int*);

    p = print;
    (p)(a);

    return 0;
}