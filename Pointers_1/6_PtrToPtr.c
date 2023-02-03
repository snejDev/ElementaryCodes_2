#include <stdio.h>

int main(void)
{
    int a = 5;
    int *p = &a;
    int **q = &p;
    int ***r = &q;

    printf("Address of a: %d\n",&a);
    printf("Value stored in pointer p: %d\n\n",p);
    
    printf("Address of pointer p: %d\n",&p);
    printf("Value stored in pointer q: %d\n",q);
    printf("Address of variable a de-referenced by q:%d\n\n",*q);

    printf("Address of pointer q: %d\n",&(q));
    printf("Value stored in pointer r: %d\n",r);
    printf("Address of pointer p de-referenced by r: %d\n\n",*r);

    return 0;
}