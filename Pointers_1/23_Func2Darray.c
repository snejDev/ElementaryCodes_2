#include <stdio.h>
void print(int (*)[3]);

void print(int (*a)[3]) //An array of three pointers
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            printf("a[%d][%d] = %d\n",i,j,*(*(a+i)+j));
    }
}

int main(void)
{
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    print(a);
    return 0;
}