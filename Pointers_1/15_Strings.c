 #include <stdio.h>

 int main(void)
 {
    char c[50] = "Snehal";          //char *c = "Snehal"; is invalid
    char *c1;

    c1=c;                           //c=c1 is invalid(remember is c1 is a character pointer)

    printf("Name: %s\n",c1);

    *(c+0) = 'A';
    *(c1+1) = 'B';

    printf("Name: %s\n",c1);

    return 0;
 }