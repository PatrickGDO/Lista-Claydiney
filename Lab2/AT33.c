#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a,b,soma;
    printf("Digite o Valor Antigo do Produto : ");
    scanf("%f",&a);
    if(a<50){
        b=a*0.05;
        soma=a+b;
        printf("O Valor novo do produto e: %.2f\n",soma);
        printf("Esta Barato o Valor Novo!!");
    }
    if((a>=50)&&(a<=100)){
        b=a*0.10;
        soma=a+b;
        printf("O Valor novo do produto e: %.2f\n",soma);
        if(soma<=80){
            printf("Esta Barato o Valor Novo!!");
        }
        else{
            printf("Esta Normal o Valor Novo!!");
        }
    }
    if(a>100){
        b=a*0.15;
        soma=a+b;
        printf("O Valor novo do produto e: %.2f\n",soma);
        if((soma>80)&&(soma<=120)){
            printf("Esta Normal o Valor Novo!!");
        }
        if((soma>120)&&(soma<=200)){
            printf("Esta Caro o Valor Novo!!");
        }
        if(soma>200){
            printf("Esta Muito Caro o Valor Novo!!");
        }
    }
    return 0;
}