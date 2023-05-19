#include <stdlib.h>
#include <stdio.h>

int main(){
    int A,B,*p1,*p2;
    printf("Digite um Numero Inteiro : ");
    scanf("%d",&A);
    printf("Digite um Numero Inteiro : ");
    scanf("%d",&B);
    p1=&A;
    p2=&B;
    if(p1>p2){
        printf("O Conteudo do Maior Endereco eh : %d ",A);
    }
    else{
        printf("O Conteudo do Maior Endereco eh: %d ",B);
    }
    return 0;
}