#include <stdlib.h>
#include <stdio.h>

int main(){
    int A[5],*p,i;
    p=A;
    for(i=0;i<5;i++){
        printf("Digite um Numero : ");
        scanf(" %i",p+i);
    }
    for(i=0;i<5;i++){
        printf("O Dobro dos Numeros sao : %d ",*(p+i)*2);
        printf("\n");
    }
    return 0;
}