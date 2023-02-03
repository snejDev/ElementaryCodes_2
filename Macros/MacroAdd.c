#include <stdio.h>

#define sum(a,b) (a+b)

int main(void)
{
    int a,b;

    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    printf("Sum of %d and %d = %d\n",a,b,sum(a,b));
    return 0;
}