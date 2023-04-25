#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float Hipotenusa(float A,float B);

int main(){
    float a,b,c;
    printf("Digite um dos catetos do triangulo : ");
    scanf("%f",&a);
    printf("Digite o outro cateto do triangulo : ");
    scanf("%f",&b);
    c = Hipotenusa(a,b);
    printf("A Hipotenusa eh : %f ",c);
    return 0;
}

float Hipotenusa(float A,float B){
    float H;
    H = sqrt((pow(A,2)+pow(B,2)));
    return H;
}