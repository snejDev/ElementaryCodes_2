#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return (a+b);
}


int main(void)
{
    int c;
    int (*p)(int,int);          //declaring a funtion pointer with the configuration of the function sum

    p = &sum;                   //initialising the function pointer
    c = (*p)(1,3);              //de-referencing the function pointer

    printf("Sum of %d and %d = %d",1,3,c);

    return 0;
}