#include <stdio.h>
#include <stdint.h>

typedef union
 {
    uint32_t datapkt;
    struct
    {
        uint32_t crc        :1;
        uint32_t status     :2;
        uint32_t payload    :12;
        uint32_t bat        :3;
        uint32_t sensor     :3;
        uint32_t long_addr  :8;
        uint32_t short_addr :2;
        uint32_t addr_mode  :1;
    }packet_fields;
}packet;

void display(packet *ptr);

void display(packet *ptr)
{
    printf("Addr mode: %x\n",ptr->packet_fields.addr_mode);
    printf("Short address: %x\n",ptr->packet_fields.short_addr);
    printf("Long address: %x\n",ptr->packet_fields.long_addr);
    printf("Sensor: %x\n",ptr->packet_fields.sensor);
    printf("Bat: %x\n",ptr->packet_fields.bat);
    printf("Payload: %x\n",ptr->packet_fields.payload);
    printf("Status: %x\n",ptr->packet_fields.status);
    printf("CRC: %x\n",ptr->packet_fields.crc);
}

int main(void)
{
    uint32_t data;
    packet pkt;

    printf("Enter a 32 bit packet: ");
    scanf("%x",&data);

    pkt.datapkt = data;
    display(&pkt);

    printf("Size of the packet: %d",sizeof(pkt));
    
    return 0;
}