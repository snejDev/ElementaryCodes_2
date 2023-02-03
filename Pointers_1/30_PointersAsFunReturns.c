#include <stdio.h>
#include <stdlib.h>

int* sum(int *a, int *b)
{
    int c = *a+*b;
    return &c;
}

int main(void)
{
    int a=2,b=3;

    int *c = sum(&a,&b);
    printf("Sum = %d",*c);

    return 0;
}