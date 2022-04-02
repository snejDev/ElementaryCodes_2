#include <stdio.h>
#include <stdlib.h>

#define MALLOC(p,n,type)\
    p = (type*)malloc(n*sizeof(type));\
    if(p==NULL)\
    {\
        printf("Insufficient memory :(");\
        exit(1);\
    }\
       /*In the first case type become type**, therefore returning a double pointer to the first element
          Basically, it is a "pointer" pointing to a series of pointer "elements": **p points to *p(i+x)
          In the second case(for the columns), type is *int where the malloc function returns a single pointer
          that is used to access int elements
          
          **p --> *p+0 *p+1 *p+2
                    ||   ||   ||
                    \/   \/   \/
                   <e1> <e2>  <e3>
                   
        */

int main(void)
{
    int row,col;
    int **p;
    

    printf("Enter the number of rows required: ");
    scanf("%d",&row);
    printf("Enter the number of columns required: ");
    scanf("%d",&col);

    /*2D array memory allocation*/
    //rows
    MALLOC(p,row,int*);              //getting a row array with element being a pointer in itself
    //columns
    for(int i=0;i<row;i++)
    {
        MALLOC(*(p+i),col,int)       //the row element pointers point to column elements(integers) 
                                     //and *(p+i) is same as p[i]
    }
    /****************************/

    printf("Enter the elements: ");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
            scanf("%d",(*(p+i)+j));  //*p(p+i),(assume this as addr) will access the column pointer's address stored at ith position, 
                                     //and adding j to it is analogous to addr+j, can be replaced with &a[i][j]
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
            printf("%d ",*(*(p+i)+j)); //*p(p+i),(assume this as addr) will access the column pointer's address stored at ith position, 
                                       //and adding j to it is analogous to *(addr+j), can be replaced with a[i][j]
        printf("\n");
    }

    return 0;
}