#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b,a;
    int *p1=&a;
    int *p2=&b;
    
    if(p1>p2){
        printf("O endereço:%p apontado por p1 é maior que o endereço apontado por p2 \n",p1);
    }
    else if(p2>p1){
        printf("O endereço:%p apontado por p2 é maior que o endereço apontado por p1 \n",p2);
    }
    else{
        printf("Ambos os ponteiros apontam para o mesmo endereço");
    }

    return 0;
}