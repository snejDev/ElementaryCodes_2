#include <stdio.h>

int a=5;
int *p = (int*)0x404004;

int main(void)
{
    *p=5;
    printf("%d",*p);
    return 0;
}