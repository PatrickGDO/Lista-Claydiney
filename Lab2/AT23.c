#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a;
    printf("Digite um ano : ");
    scanf("%d",&a);
    if((a%400==0)||((a%4==0)&&(a%100!=0))){
        printf("O Ano Escolhido e Bissexto!!");
    }
    else{
        printf("O Ano Escolhido Nao e Bissexto!!");
    }
}