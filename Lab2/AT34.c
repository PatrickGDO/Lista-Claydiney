#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int b;
    float a;
    printf("Digite a Nota do Estudante : ");
    scanf("%f",&a);
    printf("Digite a Quantidade de Faltas do Estudante : ");
    scanf("%d",&b);
    if((a>=9.0)&&(a<=10.0)){
        if(b>20){
            printf("O Conceito do Aluno e de B!!");
        }
        else{
            printf("O Conceito do Aluno e de A!!");
        }
    }
    if((a>=7.5)&&(a<=8.9)){
        if(b>20){
            printf("O Conceito do Aluno e de C!!");
        }
        else{
            printf("O Conceito do Aluno e de B!!");
        }
    }
    if((a>=5.0)&&(a<=7.4)){
        if(b>20){
            printf("O Conceito do Aluno e de D!!");
        }
        else{
            printf("O Conceito do Aluno e de C!!");
        }
    }
    if((a>=4.0)&&(a<=4.9)){
        if(b>20){
            printf("O Conceito do Aluno e de E!!");
        }
        else{
            printf("O Conceito do Aluno e de D!!");
        }
    }
    if((a>=0.0)&&(a<=3.9)){
        if(b>20){
            printf("O Conceito do Aluno e de E!!");
        }
        else{
            printf("O Conceito do Aluno e de E!!");
        }
    }
    return 0;
}