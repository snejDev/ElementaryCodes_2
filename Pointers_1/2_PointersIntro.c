#include   <stdio.h>

int main(void)
{
    int a=1;
    
    //int *p;
    //p=&a;

    int *p = &a;    //this can be further simplified as int *p = a;
    
    printf("Address of a is %d\n",p);              //Prints the address of a
    printf("Address of a is %d\n",&a);             //Prints the address of a
    printf("Address of pointer p is %d\n",&p);     //Prints the address of the pointer
    printf("a =  %d\n",*p);                        //Dereferencing a pointer
    
    //Modifying variable through pointer p
    *p = 7;
    printf("a = %d",*p);

    return 0;
}