#include <stdio.h>
#include <stdint.h>

struct Dataset
{
    char a;     //1 byte
    int b;      //4 bytes
    short c;    //2 bytes
    char d;   //1 bytes
};

int main(void)
{
    struct Dataset data;
    
    data.a = 0x11;
    data.b = 0xAABBCCDD;
    data.c = 0x4231;
    data.d = 0x11;

    uint8_t *ptr = (uint8_t*)&data;

    printf("Memory Address          Content\n");
    printf("===============================\n");
    
    for(int i=0;i<sizeof(data);i++)
    {
        printf("%p                      %x\n",ptr,*ptr);
        ptr++;
    }
    printf("Size of the structure: %d",sizeof(data));

    return 0;
}