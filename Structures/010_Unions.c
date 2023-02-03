#include <stdio.h>
#include <stdint.h>

typedef union 
{
    uint16_t short_addr;
    uint32_t long_addr;
}data;


int main(void)
{
    data a;
    a.short_addr = 0xAABB;
    a.long_addr = 0xCCCCCCCC;

    printf("Short address: %x\n",a.short_addr);
    printf("Long address: %x",a.long_addr);

    return 0;
}