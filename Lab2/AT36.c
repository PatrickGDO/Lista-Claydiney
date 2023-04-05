#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a,b,soma;
    printf("Digite o Valor da Venda : ");
    scanf("%f",&a);
    if(a<20000.0){
        b=a*0.14;
        soma=400.0+b;
        printf("A Comissao que deverar ser entrege ao vendedor e : R$%.2f ",soma);
    }
    if((a<40000.0)&&(a>=20000.0)){
        b=a*0.14;
        soma=500.0+b;
        printf("A Comissao que deverar ser entrege ao vendedor e : R$%.2f ",soma);
    }
    if((a<60000.0)&&(a>=40000.0)){
        b=a*0.14;
        soma=550.0+b;
        printf("A Comissao que deverar ser entrege ao vendedor e : R$%.2f ",soma);
    }
    if((a<80000.0)&&(a>=60000.0)){
        b=a*0.14;
        soma=600.0+b;
        printf("A Comissao que deverar ser entrege ao vendedor e : R$%.2f ",soma);
    }
    if((a<100000.0)&&(a>=80000.0)){
        b=a*0.14;
        soma=650.0+b;
        printf("A Comissao que deverar ser entrege ao vendedor e : R$%.2f ",soma);
    }
    if(a>100000.0){
        b=a*0.16;
        soma=700.0+b;
        printf("A Comissao que deverar ser entrege ao vendedor e : R$%.2f ",soma);
    }
    return 0;
}