#include <stdio.h>
#include <stdint.h>

typedef struct
{
    unsigned char addrMode;
    unsigned char shortAddr;
    unsigned char longAddr;
    unsigned char sensor;
    unsigned char bat;
    unsigned char payload;
    unsigned char status;
    unsigned char crc;
}__attribute__((packed)) packet;

void decode(packet*, uint32_t);
void display(packet*);

void decode(packet *ptr, uint32_t data)
{
    ptr->addrMode = 0x1&data;              //1bit
    ptr->shortAddr = 0x3&(data>>1);        //2bits
    ptr->longAddr = 0xFF&(data>>3);        //8bits
    ptr->sensor = 0x7&(data>>11);          //3bits
    ptr->bat = 0x7&(data>>14);             //3bits
    ptr->payload = 0xFFF&(data>>17);       //12bits
    ptr->status = 0x1&(data>>29);          //1bit
    ptr->crc = 0x3&(data>>30);             //2bits
}

void display(packet *ptr)
{
    printf("addrMode: %x\n",ptr->addrMode);
    printf("shortAddr: %x\n",ptr->shortAddr);
    printf("longAddr: %x\n",ptr->longAddr);
    printf("sensor: %x\n",ptr->sensor);
    printf("bat: %x\n",ptr->sensor);
    printf("payload: %x\n",ptr->payload);
    printf("status: %x\n",ptr->status);
    printf("crc: %x\n",ptr->crc);
}

int main(void)
{
    uint32_t data = 0xaabbccdd;
    packet pkt;

    printf("Enter a 32-bit packet: ");
    scanf("%x",&data);
    printf("Packet Entered: %x\n",data);

    decode(&pkt,data);
    display(&pkt);

    return 0;
}