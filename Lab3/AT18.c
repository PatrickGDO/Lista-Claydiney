#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int ano=1996;
    float salario,aumento,fixo,salario_aumento;
    for(salario = 2000.0,aumento = 0.015;ano<=2023;ano++,aumento = aumento * 2){
        salario_aumento = salario*aumento;
        fixo = fixo + salario_aumento ;
    }
    printf("O Salario do Funcionario e : R$%.2f",fixo+salario);
    return 0;
}