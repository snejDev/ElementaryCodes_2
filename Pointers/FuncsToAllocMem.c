#include <stdio.h>
#include <stdlib.h>

int* MALLOC_INT(int);
float* MALLOC_FLOAT(int);
char* MALLOC_CHAR(int);
double* MALLOC_DOUBLE(int);

int* MALLOC_INT(int n)
{
    int *p = NULL;
    p = (int*)malloc(n*sizeof(int));
    if(p==NULL)
    {
        printf("Insufficient memory :(");
        exit(0);
    }
    return p;
}

float* MALLOC_FLOAT(int n)
{
    float *p = NULL;
    p = (float*)malloc(n*sizeof(float));
    if(p==NULL)
    {
        printf("Insufficient memory :(");
        exit(0);
    }
    return p;
}

char* MALLOC_CHAR(int n)
{
    char *p = NULL;
    p = (char*)malloc(n*sizeof(char));
    if(p==NULL)
    {
        printf("Insufficient memory :(");
        exit(0);
    }
    return p;
}

double* MALLOC_DOUBLE(int n)
{
    double *p = NULL;
    p = (double*)malloc(n*sizeof(double));
    if(p==NULL)
    {
        printf("Insufficient memory :(");
        exit(0);
    }
    return p;
}

//Test code
int main(void)
{
    int *p;
    p = MALLOC_INT(5);
    printf("Enter elements: ");
    
    for(int i=0;i<5;i++)
        scanf("%d",(p+i));

    for(int i=0;i<5;i++)
        printf("%d ",*(p+i));

    free(p);
    p = NULL;

    return 0;
}