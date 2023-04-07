#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b,soma=0;
    b=100;
    for(a=0;a<=b;a=a+2){
        soma=soma+a;
    }
    printf("A soma dos 50 primeiros numeros pares sao : %d ",soma);
    return 0;
}