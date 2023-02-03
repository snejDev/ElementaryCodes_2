#include <stdio.h>

void display(char []);

int main(void)
{
    char s[50];

    printf("Enter a string: ");
    scanf("%[^\n]",s);

    display(s);

    return 0;
}

void display(char s[])
{
    printf("%s",s);
}