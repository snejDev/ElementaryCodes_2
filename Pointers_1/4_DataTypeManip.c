#include <stdio.h>

int main(void)
{
    int a = 1025;
    
    int *p = &a;
    printf("Address of a is: %d\nValue of a is: %d\n",p,*p);

    char *p1 = (char*)p;
    printf("Address of b is: %d\nValue of a is: %d\n",p1,*p1);      //Value is 1

    //Follows little endian and binary representation of 1025 is  00000000 00000000 00000100 00000001

    p1 += 1;
    printf("Address of b is: %d\nValue of a is: %d\n",p1,*p1);      //Value is 4

    return 0;
}