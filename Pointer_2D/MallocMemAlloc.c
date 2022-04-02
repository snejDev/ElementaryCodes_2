#include <stdio.h>
#include <stdlib.h>

int i=0;

#define MALLOC(type,n,p)\
        p = (type*)malloc(n*sizeof(type));\
        /*In the first case type become type**, therefore returning a double pointer to the first element
          Basically, it is a "pointer" pointing to a series of pointer "elements": **p points to *p(i+x)
          In the second case(for the columns), type is *int where the malloc function returns a single pointer
          that is used to access int elements
          
          **p --> *p+0 *p+1 *p+2
                    ||   ||   ||
                    \/   \/   \/
                   <e1> <e2>  <e3>
                   
        */\
        if(p==NULL)\
        {\
            printf("Insufficient memory :(\n");\
        }\

int main(void)
{
    int row,col;
    int** p = NULL;                             //double pointer
    int i = 0;

    printf("Enter the number of rows: ");
    scanf("%d",&row);
    printf("Enter the number of columns: ");
    scanf("%d",&col);

    MALLOC(int*,row,p);                         //note the data type here is of int* so that each element is a pointer in itself

    for(i=0;i<row;i++)
        MALLOC(int,col,(p[i]));

    return 0;
}
