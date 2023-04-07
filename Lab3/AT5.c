#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b,soma=0;
    for(b=1;b<11;b++){
        printf("Digite um numero inteiro : ");
        scanf("%d",&a);
        soma=soma+a;
    }
    printf("A soma dos Numeros e : %d",soma);
    return 0;
}