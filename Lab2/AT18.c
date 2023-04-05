#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float b,c,soma,diferenca,produto,divisao;
    int a;
    printf("Escolha a opcao \n1- soma de dois numeros\n2- diferenca entre dois numeros\n3- produto entre dois numeros\n4- Divisao entre dois numeros\n : ");
    scanf("%d",&a);
    switch(a){
        case 1:
            printf("Digite o Primeiro numero para ser somado : ");
            scanf("%f",&b);
            printf("Digite o Segundo numero para ser somado : ");
            scanf("%f",&c);
            soma = b+c;
            printf("O Resultado e : %f",soma);break;
        case 2:
            printf("Digite o Primeiro numero para saber a diferenca : ");
            scanf("%f",&b);
            printf("Digite o Segundo numero para saber a diferenca : ");
            scanf("%f",&c);
            if(c>b){
                diferenca = c-b;
                printf("O Resultado e : %f",diferenca);break;
            }
            else{
                diferenca = b-c;
                printf("O Resultado e : %f",diferenca);break;
            }
        case 3:
            printf("Digite o Primeiro numero para saber o produto : ");
            scanf("%f",&b);
            printf("Digite o Segundo numero para saber o produto : ");
            scanf("%f",&c);
            produto = b*c;
            printf("O Resultado e : %f",produto);break;
        case 4:
            printf("Digite o numero que vai ser o denominador : ");
            scanf("%f",&b);
            printf("Digite o numero que vai ser dividido : ");
            scanf("%f",&c);
            if(b>0){
                divisao = c/b;
                printf("O Resultado e : %f",divisao);break;
            }
            else{
                printf("O denominador e Invalido!!");break;
            }
        default: printf("Opcao invalida!!");break;
    }
    return 0;
}