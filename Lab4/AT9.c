#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.141592

float Volume_Cilindro(float A,float B);

int main(){
    float a,b,c;
    printf("Digite a Altura de um cilindro : ");
    scanf("%f",&a);
    printf("Diguite o Raio de um Cilindro : ");
    scanf("%f",&b);
    c = Volume_Cilindro(a,b);
    printf("O Volume do Cilindor eh: %f",c);
    return 0;
}

float Volume_Cilindro(float A,float B){
    float V;
    V = PI*pow(B,2)*A;
    return V;
}