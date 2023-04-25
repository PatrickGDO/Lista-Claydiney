#include <stdio.h>
#include <stdlib.h>

void Maior(float A,float B);

int main(){
    float a,b;
    printf("Digite um numero : ");
    scanf("%f",&a);
    printf("Digite um numero : ");
    scanf("%f",&b);
    Maior(a,b);
    return 0;
}

void Maior(float A,float B){
    if(A>B){
        printf("A Maior numero eh: %.f ",A);
    }
    else{
        printf("O Maior numero eh: %f ",B);
    }
}