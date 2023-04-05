#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a,b;
    printf("Digite um numero real : ");
    scanf("%f",&a);
    if(a>=0){
        b=sqrt(a);
        printf("A raiz quadrada do numero e : %f",b);
    }
    else{
        b=pow(a,2);
        printf("O Numero ao quadrado e : %f",b);
    }
    return 0;
}