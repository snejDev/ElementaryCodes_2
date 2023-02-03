#include <stdio.h>

int a = 5;

int sum(int b)
{
    return (a+5);
}

int main(void)
{
    sum(5);
    printf("Sum = %d",a);

    return 0;
}