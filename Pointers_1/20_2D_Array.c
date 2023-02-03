#include <stdio.h>

int main(void)
{
    int a[2][3] = {{1,2,3},{4,5,6}};

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("&a[%d][%d] or (*(a+%d)+%d) = %d\n",i,j,i,j,(*(a+i)+j));     //Element addresses
            printf("a[%d][%d] or *(*(a+%d)+%d) = %d\n",i,j,i,j,*(*(a+i)+j));    //Elements
        }
    }

    return 0;
}