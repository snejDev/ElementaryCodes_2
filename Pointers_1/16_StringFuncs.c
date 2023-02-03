#include <stdio.h>

void stringManip(char*);

int main(void)
{
    char c[20] = "Snehal";
    stringManip(c);   

    printf("String: %s",c);

    return 0;
}

void stringManip(char *s)
{
    for(int i=0;i<3;i++)
        *(s+i) = 'A';
}