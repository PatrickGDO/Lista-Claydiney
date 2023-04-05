#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a;
    float c,b;
    do{
        printf("100-Codigo\nCachorro Quente\nPreco de : 1,20\n");
        printf("101-Codigo\nBauru Simples\nPreco de : 1,30\n");
        printf("102-Codigo\nBauru Com Ovo\nPreco de : 1,50\n");
        printf("103-Codigo\nHamburguer\nPreco de : 1,20\n");
        printf("104-Codigo\nCheeseburguer\nPreco de : 1,70\n");
        printf("105-Codigo\nSuco\nPreco de : 2,20\n");
        printf("106-Codigo\nRefrigerante\nPreco de : 1,00\n\n");
        printf("Digite o Codigo do Item Desejado :");
        scanf("%d",&a);
        if((a<100)||(a>106)){
            printf("Codigo Invalido!!\n\n");
        }
    }while((a<100)||(a>106));
    switch(a){
        case 100:
            printf("Quantos Gostaria de Levar?? : ");
            scanf("%f",&b);
            c=1.20*b;
            printf("O Valor que deverar ser Pago e : %.2f",c);break;
        case 101:
            printf("Quantos Gostaria de Levar?? : ");
            scanf("%f",&b);
            c=1.30*b;
            printf("O Valor que deverar ser Pago e : %.2f",c);break;
        case 102:
            printf("Quantos Gostaria de Levar?? : ");
            scanf("%f",&b);
            c=1.50*b;
            printf("O Valor que deverar ser Pago e : %.2f",c);break;
        case 103:
            printf("Quantos Gostaria de Levar?? : ");
            scanf("%f",&b);
            c=1.20*b;
            printf("O Valor que deverar ser Pago e : %.2f",c);break;
        case 104:
            printf("Quantos Gostaria de Levar?? : ");
            scanf("%f",&b);
            c=1.70*b;
            printf("O Valor que deverar ser Pago e : %.2f",c);break;
        case 105:
            printf("Quantos Gostaria de Levar?? : ");
            scanf("%f",&b);
            c=2.20*b;
            printf("O Valor que deverar ser Pago e : %.2f",c);break;
        case 106:
            printf("Quantos Gostaria de Levar?? : ");
            scanf("%f",&b);
            c=1.00*b;
            printf("O Valor que deverar ser Pago e : %.2f",c);break;
    }
    return 0;
}