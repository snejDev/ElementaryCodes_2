//void pointers are used to store the address of a variable of any data type. Arithmetic ops and de-referencing cannot be performed on these
//There is no need for explicit typecasting when linking them with a variable

#include <stdio.h>

int main(void)
{
    int a = 0;
    void *p = &a;

    printf("Address of a = %d\n",p); 
    printf("Value of a = %d\n",&a);

    //printf("Value of a = %d",*p);             De-referencing is not allowed
    //printf("PtrArithmetic of a = %d",(p+1));  Pointer arithmetic is disallowed

    return 0;
}