#include <stdio.h>
void print(int (*)[2][3]);

void print(int (*a)[2][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<3;k++)
                printf("a[%d][%d][%d] = %d\n",i,j,k,*(*(*(a+i)+j)+k));
        }
    }
}

int main(void)
{
    int a[3][2][3]  = {{{1,2,3},{4,5,6}},{{7,8,9},{10,11,12}},{{13,14,15},{16,17,18}}};
    print(a);
    return 0;
}