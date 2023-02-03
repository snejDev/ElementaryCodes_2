#include <stdio.h>
#include <stdlib.h>

//Function declaration
int check(int, int, int);
void bubblesort(int*, int, int (*)(int, int));

//callback function
int check(int a, int b, int ch)
{
    if(ch==0)
    {
        printf("Invalid entry!\n");
        exit(-1);
    }
    else if(a>b)
        return (1*ch);
    else    
        return (-1*ch);
}

void bubblesort(int *a, int n, int (*check)(int, int, int))
{
    int ch;

    printf("Do you want the array sorted in the 1) Ascending or 2) Descending order?\n");
    scanf("%d",&ch);

    printf("\n");

    ch = (ch==1)?1:((ch==2)?-1:0);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<(n-i-1);j++)
        {
            if((*check)(*(a+j),*(a+j+1),ch)>0)  //if((check)(*(a+j),*(a+j+1),ch)>0) 
            {
                *(a+j) += *(a+j+1);
                *(a+j+1) = *(a+j)-*(a+j+1);
                *(a+j) -=*(a+j+1);
            }
        }
    }
}

int main(void)
{
    int n;

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    int *a = (int*)calloc(n,sizeof(int));           //allocate memory for an array of size n
    
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++)
        scanf("%d",(a+i));

    bubblesort(a,n,&check);                         //bubblesort(a,n,check)

    for(int i=0;i<n;i++)
        printf("%d\n",*(a+i));

    return 0;
}