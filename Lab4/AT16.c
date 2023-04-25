#include <stdio.h>
#include <stdlib.h>

void desenho_linha(int A);

int main(){
    int a;
    printf("Digite a Quantidade de sinal que deseja ver : ");
    scanf("%d",&a);
    desenho_linha(a);
}

void desenho_linha(int A){
    int i;
    for(i=1;i<=A;i++){
        printf("=");
    }
}