#include <stdio.h>

int print(int *a)
{
    for(int i=0;i<3;i++)
        printf("a[%d] = %d\n",i,*(a+i));
}

int main(void)
{
    int a[3] = {1,2,3};
    print(a);
    return 0;
}