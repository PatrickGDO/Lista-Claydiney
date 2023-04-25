#include <stdio.h>
#include <stdlib.h>

int Fahren(float C);

int main(){
    float C,F;
    printf("Digite uma temperatura em Graus para Convertela em Fahrenheit :  ");
    scanf("%f",&C);
    F = Fahren(C);
    printf("A Conversao fica: %.2f ",F);
    return 0;
}

int Fahren(float C){
    float F;
    F = C*(9.0/5.0)+32.0;
    return F;
}