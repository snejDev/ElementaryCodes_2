#include <stdio.h>
void add(int,int);


void add(int a, int b)
{
    printf("Sum of %d and %d = %d",a,b,(a+b));
}

int main(void)
{
    add(1,2);
    return 0;
}