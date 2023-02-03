// In C, the string is a character array, with the assumption that it is terminated by a null character 

#include <stdio.h>
#include <string.h>

int main(void)
{
    char c[20];
    c[0] = 'S';
    c[1] = 'N';
    c[2] = 'E';
    c[3] = 'H';
    c[4] = 'A';
    c[5] = 'L';

    printf("The string is: %s\n",c);
    printf("String length: %d\n",strlen(c));

    c[6] = '\0';
    printf("The string is: %s\n",c);
    printf("String length: %d\n",strlen(c));

    return 0;
}