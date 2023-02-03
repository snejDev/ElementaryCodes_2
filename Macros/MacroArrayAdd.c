#include <stdio.h>
#include <stdlib.h>

#define add(p,n,s)\
        printf("Enter elements of the array: ");\
        for(int i=0;i<n;i++)\
        {\
            scanf("%d",(p+i));\
            s+=*(p+i);\
        }\

int main(void)
{
    int n = 5;
    int s = 0;

    int *p = NULL;
    p = (int*)calloc(n,sizeof(int));
    add(p,n,s)
    printf("%d",s);
}