#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a,b,c,d,soma;
    printf("Digite a nota do Trabalho do Laboratorio : ");
    scanf("%f",&a);
    printf("Digite a nota da Avaliacao Semestral : ");
    scanf("%f",&b);
    printf("Digite a nota do Exame Final : ");
    scanf("%f",&c);
    if((a>=0.0)&&(a<=10.0)&&(b>=0.0)&&(b<=10.0)&&(c>=0.0)&&(c<=10.0)){
        soma = (a*2)+(b*3)+(c*5);
        d = soma/10;
        if((d>=0)&&(d<=2.9)){
            printf("O Aluno esta Reprovado\n");
        }
        if ((d>=3)&&(d<=4.9)){
            printf("O Aluno esta de Recuperacao\n");
        }
        if(d>=5){
            printf("O Aluno esta Aprovado\n");
        }
        
    }
    else{
        printf("Numeros Invalidos!!");
    }

    return 0;
}