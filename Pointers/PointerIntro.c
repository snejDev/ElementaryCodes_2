#include <stdio.h>

int main(void)
{
    int a  = 10;
    int* p = NULL;
    p = &a;

    printf("Memory address of a : %x\n", p);
    printf("Value of a : %d\n", *p);
}
