#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b;
    printf("Digite um numero inteiro : ");
    scanf("%d",&a);
    if(a<0){
        printf("Numero invalido");
    }
    else{
        b = log10(a);
        printf("O Logaritmo deste numero e :%d ",b);
    }
    return 0;
}