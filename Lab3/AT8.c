#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b,menor,maior;
    printf("Digite um numero inteiro : ");
    scanf("%d",&a);
    menor = a;
    maior = a;
    for(b=1;b<10;b++){
        printf("Digite um numero inteiro : ");
        scanf("%d",&a);
        if(a>maior){
            maior = a;
        }
        if(a<menor){
            menor = a;
        }
    }
    printf("O Maior Numero e : %d\n",maior);
    printf("O Menor Numero e : %d\n",menor);
    return 0;
}