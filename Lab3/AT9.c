#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b=1;
    do{
    printf("Digite um numero inteiro : ");
    scanf(" %d",&a);
    }while(a<0);
    while(b<a){
        printf("Os Numeros sao : %d\n",b);
        b=b+2;
    }
    return 0;
}