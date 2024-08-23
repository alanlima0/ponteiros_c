#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vet[10]={1,2,3,4,5,6,7,8,9,10};
    float *p = vet;

    for (int i = 0; i < 10; i++)
    {
        printf("%p \n",p+i);
    }

    return 0;

}