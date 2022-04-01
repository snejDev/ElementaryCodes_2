#include <stdio.h>

int swap(int*,int*);

int main(void)
{
    int a,b;

    printf("Enter two values: ");
    scanf("%d%d",&a,&b);

    printf("A:%d B:%d\n",a,b);
    printf("After swapping\n");
    swap(&a,&b);
    printf("A:%d B:%d\n",a,b);
}

int swap(int* a, int* b)
{
    *a += *b;
    *b = *a-*b;
    *a -= *b;
}