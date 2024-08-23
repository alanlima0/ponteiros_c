#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y,x;
    int *p1 = NULL;
    int *p2 = NULL;

    printf("Insira o valor da variavel x: ");
    scanf("%d",&x);
    printf("Insira o valor da variavel y: ");
    scanf("%d",&y);

    p1 = &x;
    p2 = &y;

    if(p1>p2){
        printf("O conteudo apontado pelo maior endereço (p1:%p) é: %d \n",p1, *p1);
    }
    else if(p2>p1){
        printf("O conteudo apontado pelo maior endereço (p2:%p) é: %d \n",p2, *p2);
    }
    else{
        printf("Ambos os ponteiros apontam para o mesmo endereço");
    }

    return 0;
}