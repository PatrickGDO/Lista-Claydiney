#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    float a,peso;
    char sexo;
    printf("Digite o seu Sexo (F para Feminino e M para Masculino) :\n");
    scanf("%c",&sexo);
    printf("Digite a sua Altura :\n");
    scanf("%f",&a);
    if(sexo=='F'){
        peso=(62.1*a)-44.7;
        printf("O seu peso ideal e : %.2f",peso);

    }
    else{
        peso=(72.7*a)-58.0;
        printf("O seu peso ideal e : %.2f",peso);
    }
    return 0;
}