#include <stdio.h>
#include <stdint.h>

typedef struct
{
    uint32_t addr_mode      :1;
    uint32_t short_addr     :2;
    uint32_t long_addr      :8;
    uint32_t sensor         :3;
    uint32_t bat            :3;
    uint32_t payload        :12;
    uint32_t status         :1;
    uint32_t crc            :2;
}packet;

void decode(packet *ptr, uint32_t data);
void display(packet *ptr);

void decode(packet *ptr, uint32_t data)
{
    ptr->addr_mode = (data>>31)&0x1;
    ptr->short_addr = (data>>29)&0x3;
    ptr->long_addr = (data>>21)&0xFF; 
    ptr->sensor = (data>>18)&0x7;
    ptr->bat = (data>>15)&0x7;
    ptr->payload = (data>>3)&0xFFF;
    ptr->status = (data>>2)&0x1;
    ptr->crc = data&0x3;

    display(ptr);
}

void display(packet *ptr)
{
    printf("Addr mode: %x\n",ptr->addr_mode);
    printf("Short address: %x\n",ptr->short_addr);
    printf("Long address: %x\n",ptr->long_addr);
    printf("Sensor: %x\n",ptr->sensor);
    printf("Bat: %x\n",ptr->bat);
    printf("Payload: %x\n",ptr->payload);
    printf("Status: %x\n",ptr->status);
    printf("CRC: %x\n",ptr->crc);
}

int main(void)
{
    uint32_t data;
    packet pkt;

    printf("Enter a 32 bit packet: ");
    scanf("%x",&data);

    decode(&pkt,data);

    printf("Size of the packet: %d",sizeof(pkt));
    
    return 0;
}