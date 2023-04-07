#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b,c,d,e;
    printf("Digite a Quantidade de Vezes que deseja rolar os dados : ");
    scanf("%d",&a);
    printf("Digite a Quantdade de Lados que o Dado Tem : ");
    scanf("%d",&e);
    srand(time(NULL));
    for(b=0;b<a;b++){
        c=rand()%e;
        d=rand()%e;
        if(c==d){
            printf("\nOs Dados Sao : %d e %d\n",c,d);
            printf("\nOs Dados Sao Iguais!!\n");
        }
        if(c<d){
            printf("\nOs Dados Sao : %d e %d\n",c,d);
            printf("\nO Primeiro Dado e Menor que o Segundo!!\n");
        }
        if(c>d){
            printf("\nOs Dados Sao : %d e %d\n",c,d);
            printf("\nO Primeiro Dado e Maior que o Segundo!!\n");
        }
    }
    return 0;
}