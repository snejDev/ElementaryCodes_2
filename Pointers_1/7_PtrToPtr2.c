// demonstrates pointer to pointer de-referencing and data manipulation
#include <stdio.h>

int main(void)
{
    int a = 1;
    
    int *p = &a;
    int **q = &p;
    int ***r = &q;

    printf("\n*p = %d\n",*p);                      //1
    printf("*(*q) or **q = %d\n",**q);             //1
    printf("*(*(*r))) or ***r = %d\n",***r);       //1
    
    return 0;
}