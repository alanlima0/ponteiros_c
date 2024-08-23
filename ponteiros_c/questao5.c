#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[5];
    int *p = vet;

    printf("Insira os valores do array: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",(p+i));
    }
    printf("Dobro de cada valor lido: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d \n",(*(p+i))*2);
    }

    return 0;
}