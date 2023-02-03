#include <stdio.h>

typedef struct  //optional tag
{
    int a;
    char b;
    short c;
}data;

int main(void)
{
    data d;
    data *ptr = (data*)&d;      //store the address of d in pointer variable 
    
    //Structure Member access using pointers
    ptr->a = 1;         //*(address_of_a) = 1;
    ptr->b = 'a';       //*(address_of_b) = 'a';
    ptr->c = 3;         //*(address_of_c) = 3;

    printf("a = %d\n",ptr->a);
    printf("b = %c\n",ptr->b);
    printf("c = %d\n",ptr->c);

    return 0;
}