#include <stdio.h>

typedef struct  //optional tag
{
    int a;
    char b;
    short c;
}data;

void DisplayMembers(data*);

int main(void)
{
    data d;
    DisplayMembers((data*)&d); //PascalCase
    return 0;
}

void DisplayMembers(data *ptr)
{
    ptr->a = 1;
    ptr->b = 'a';
    ptr->c = 1;

    printf("a = %d\n",ptr->a);
    printf("b = %c\n",ptr->b);
    printf("c = %d\n",ptr->c);
}