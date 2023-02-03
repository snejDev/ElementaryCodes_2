#include <stdio.h>

int main(void)
{
    int a[3][2][2] = {{{1,2},{3,4}},{{5,6},{7,8}},{{9,10},{11,12}}};
    
    for(int i=0;i<3;i++)
    {
        printf("%d\n",(a+i));                                    //address of a[0], a[1] and a[2]
        for(int j=0;j<2;j++)
        {
            printf("%d\n",(*(a+i)+j));                           //address of a[0][0], a[1][0] and a[2][0]
            for(int k=0;k<2;k++)
            {
                printf("%d\n",*(*(a+i)+j)+k);                    //address of all elements
                printf("Element: %d\n",*(*(*(a+i)+j)+k));        //Print the elements
            }
        }
    }

    return 0;
}