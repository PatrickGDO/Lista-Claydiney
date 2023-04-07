#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b,c;
    do{
        printf("\nEscolha a Opcao que deseja\n 1-Adicao\n 2-Subtracao\n 3-Multiplicacao\n 4-Divisao\n 5-Saida\n :");
        scanf("%d",&a);
        if((a>5)||(a==0)){
            printf("\nNumero Invalido!!\n");
        }
        switch(a){
            case 1:
                printf("Digite um dos Valores que Deseja Efetuar a Adicao : ");
                scanf(" %d",&b);
                printf("Digite o outro Valor que Deseja Efetuar a Adicao : ");
                scanf(" %d",&c);
                printf("A Adicao dos Valores e : %d\n",b+c);break;
            case 2:
                printf("Digite um dos Valores que Deseja Efetuar a Subtracao : ");
                scanf(" %d",&b);
                printf("Digite o outro Valor que Deseja Efetuar a Subtracao : ");
                scanf(" %d",&c);
                printf("A Subtracao dos Valores e : %d\n",b-c);break;
            case 3:
                printf("Digite um dos Valores que Deseja Efetuar a Multiplicacao : ");
                scanf(" %d",&b);
                printf("Digite o outro Valor que Deseja Efetuar a Multiplicacao : ");
                scanf(" %d",&c);
                printf("A Multiplicacao dos Valores e : %d\n",b*c);break;
            case 4:
                printf("Digite o Numerador que Deseja Efetuar a Divisao : ");
                scanf(" %d",&b);
                printf("Digite o Denominador que Deseja Efetuar a Divisao : ");
                scanf(" %d",&c);
                printf("A Divisao dos Valores e : %d\n",b/c);break;
            
        }
    }while((a>5)||(a<5));
    return 0;
}