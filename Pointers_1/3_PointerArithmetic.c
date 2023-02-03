//This program demonstrates pointer arithmetic
#include <stdio.h>

int main(void)
{
    int a = 10;     // if the address of a is 2008,
    int b = 5;      // address of b will be 2004, and    
    int c = 2;      // address of c will be 2000

    int *p;
    p = &a;
    
    //Pointer arithmetic
    printf("Address of a is: %d\n",&a);
    printf("Address of b is: %d\n",&b);
    printf("Address of c is: %d\n\n",&c);

    printf("Address of p is: %d\n",p);
    printf("Size of integer data types is: %d\n",sizeof(int));
    printf("Address of p-1 is: %d\n",p-1);                          //decrements by 4 bytes
    
    p--;
    printf("Deferenced pointer value is: %d",*p);                   //should print b's value

    return 0;
}