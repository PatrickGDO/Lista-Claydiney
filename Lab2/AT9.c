#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a,b,c;
    printf("Digite o Valor do Salario :\n");
    scanf("%f",&a);
    printf("Digite o Valor da Prestacao do Emprestimo :\n");
    scanf("%f",&b);
    c=a*0.2;
    if(b>c){
        printf("Emprestimo nao concedido");
    }
    else{
        printf("Emprestimo concedido");
    }
    return 0;
}