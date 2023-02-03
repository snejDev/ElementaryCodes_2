#include <stdio.h>
#include <stdint.h>

void printStr(unsigned int, uint32_t, uint32_t, float);

struct carModel
{
    unsigned int carNumber;
    uint32_t carPrice;
    uint16_t carMaxSpeed;
    float carWeight;
};

void printStr(unsigned int carN, uint32_t carP, uint32_t carS, float carW)
{
    printf("\nCar Number: %u\n", carN);
    printf("Car Price: %d\n", carP);
    printf("Car Max Speed: %d\n", carS);
    printf("Car Weight: %.2f\n",carW);
}

int main(void)
{
    struct carModel a,b;
    /*
    //a = {2021,15000,220,1330};        //C89 method - Order is important
    a = {.carNumber = 2021, .carPrice = 15000, .carMaxSpeed = 220, .carWeight = 1330};     //C99 method - Order is not important
    b = {4031,35000,160,1900.96};
    
    printStr(a.carNumber,a.carPrice,a.carMaxSpeed,a.carWeight);
    printStr(b.carNumber,b.carPrice,b.carMaxSpeed,b.carWeight);*/

    printf("Size of variable a: %i\n",sizeof(a));
    printf("Size of variable b: %i\n",sizeof(b));

    return 0;
}