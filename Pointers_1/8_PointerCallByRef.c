#include <stdio.h>

int add(int*,int*);

int main(void)
{
    int a=1, b=2;

    printf("Sum of %d and %d =  %d\n",a,b,add(&a,&b));  //order of precedence in print statement assignments is from right to left

    return 0;
}

int add(int *a, int *b)
{
    *a += 1;
    return (*a+*b);
}