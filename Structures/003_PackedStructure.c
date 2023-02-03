#include <stdio.h>
#include <stdint.h>

typedef struct
{
    char a;
    unsigned int b;
    char c;
    short d;
}__attribute__((packed))  data;

int main(void)
{
    data p = {.a=0x11, .b=0xAABBCCDD, .c=0x11, .d=0x1122};
    uint8_t *ptr = (uint8_t*)&p;

    printf("Memory Address         Content\n");
    for(int i=0;i<sizeof(p);i++,ptr++)
        printf("%p                     %x\n",ptr,*ptr);
    printf("Size of the structure: %d", sizeof(p));

    return 0;
}