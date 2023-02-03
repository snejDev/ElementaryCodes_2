//Arrays are always passed as call-by-reference in C. That is the base address of the array is passed as parameter.

#include <stdio.h>

int sum(int*);

int main(void)
{
    int a[] = {1,2,3,4,5};

    printf("Sum of all array elements: %d",sum(a));

    return 0;
}

int sum(int *a)
{
    int sum = 0;
    
    for(int i=0; i<5;i++)
        sum += *(a+i); 

    return sum;
}