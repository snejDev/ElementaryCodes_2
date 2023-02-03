#include <stdio.h>

void print(char*);

int main(void)
{
    char s[100];

    printf("Enter a string: ");
    scanf("%[^\n]",s);

    print(s);

    return 0;
}

void print(char *s)
{
    while(*s!='\0')
    {        
        printf("%c",*s);
        s++;
    }
    printf("\n");
}