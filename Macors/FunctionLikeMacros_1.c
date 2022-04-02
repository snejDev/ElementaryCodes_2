#include <stdio.h>

/*the reason we use macros is that the program become dynamically typed, that is irrespective of the data type a and b are we get the output*/

#define max(a,b) (a>b)?a:b         //when max(a,b) is called, it's replaced by (a>b)?a:b

int main(void)
{
    int a,b;

    printf("%d",max(0.5,2));                  

    return 0;
}
