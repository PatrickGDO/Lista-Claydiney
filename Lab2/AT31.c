#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a,b;
    printf("Digite a Altura de uma Pessoa (Ex: 1.75) : ");
    scanf("%f",&a);
    printf("Digite o Peso de uma Pessoa (Ex: 89) : ");
    scanf("%f",&b);
    if((a<1.20)){
        if(b<=60){
            printf("A Classificacao desta Pessoa e A!!");
        }
        if((b>60)&&(b<=90)){
            printf("A Classificacao desta Pessoa e D!!");
        }
        if(b>90){
            printf("A Classificacao desta Pessoa e G!!");
        }
    }
    if((a>=1.20)&&(a<=1.70)){
        if(b<=60){
            printf("A Classificacao desta Pessoa e B!!");
        }
        if((b>60)&&(b<=90)){
            printf("A Classificacao desta Pessoa e E!!");
        }
        if(b>90){
            printf("A Classificacao desta Pessoa e H!!");
    	}
    }
    if(a>1.70){
        if(b<=60){
            printf("A Classificacao desta Pessoa e C!!");
        }
        if((b>60)&&(b<=90)){
            printf("A Classificacao desta Pessoa e F!!");
        }
        if(b>90){
            printf("A Classificacao desta Pessoa e I!!");
        }
    }
    return 0;
}