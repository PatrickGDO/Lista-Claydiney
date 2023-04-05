#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a;
    printf("Digite um numero inteiro : ");
    scanf("%d",&a);
    if(a%2==0){
        printf("O Numero e Par!!");
    }
    else{
        printf("O Numero e Impar!!");
    }
    return 0;
}