#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b;
    printf("Digite um Numero : ");
    scanf("%d",&a);
    printf("Digite um Numero : ");
    scanf("%d",&b);
    if(a>b){
        printf("O Primeiro Numero e o Maior!!");
    }

    else{
        printf("O Segundo Numero e o Maior!!");
    }

    return 0;
}