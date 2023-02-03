#include <stdio.h>

int main(void)
{
    char *c = "Snehal";             //This becomes a string constant and in the memory, the space is not allocated 
                                    //in the stack but instead in the text constant part of the memory
    
    while(*c!='\0')
    {
        printf("%c",*c);
        c++;
    }
    return 0;
}