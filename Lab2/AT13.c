#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b,c,d,soma;
    printf("Digite a nota da Primeira prova : ");
    scanf("%d",&a);
    printf("Digite a nota da Segunda prova : ");
    scanf("%d",&b);
    printf("Digite a nota da Terceira prova : ");
    scanf("%d",&c);
    soma = a+b+(c*2);
    d = soma/4;
    printf("A Media do Estudade foi de : %d\n",d);
    if(soma>=60){
        printf("O Estudade esta Aprovado!!");
    }
    else{
        printf("O Estudade esta Reprovado!!");
    }
    return 0;
}