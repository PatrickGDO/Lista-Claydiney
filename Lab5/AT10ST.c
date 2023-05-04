#include <stdio.h>
#include <stdlib.h>


int main(){
    float a,b,descont;
    char vet[20];
    printf("Digite o nome de uma mercadoria : ");
    scanf("%s",vet);
    printf("Digite o valor da Mercadoria : ");
    scanf(" %f",&a);
    b=a*0.1;
    descont = a - b;
    printf("A Mercadoria %s Custa %.2f R$, com o desconto de %.2f R$ o valor a ser pago no total eh: %.2f R$ ",vet,a,b,descont);
    return 0;
}