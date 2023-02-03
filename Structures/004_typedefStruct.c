#include <stdio.h>

typedef struct  //<tagname is optional>
{
    int a;
}data;

int main(void)
{
    data d  = {.a=1};
    printf("a = %d",d);
    return 0;
}