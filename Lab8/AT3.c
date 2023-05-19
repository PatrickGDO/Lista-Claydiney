#include <stdio.h>
#include <stdlib.h>

int main(){
    int A,B;
    if(&A>&B){
        printf("O Endereco de A e Maior!!\n");
        printf("%p\n",&A);
    }
    else{
        printf("O Endereco de B e Maior!!\n");
        printf("%p\n",&B);
    }
    return 0;
}