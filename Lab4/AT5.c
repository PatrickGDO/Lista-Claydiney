#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14

void Volume_Esfera(float A);

int main(){
    float raio;
    printf("Digite o Raio para Saber o Volume da Esfera :");
    scanf("%f",&raio);
    Volume_Esfera(raio);
    return 0;
}

void Volume_Esfera(float A){
float Volume;
Volume = (3.0/4.0)*PI*pow(A,3);
printf("O Volume da Esfera eh: %f ",Volume);
}