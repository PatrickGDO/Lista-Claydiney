#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a,b,A,c;
    printf("Digite a Base Menor do Trapezio : ");
    scanf("%f",&a);
    printf("Digite a Base Maior do Trapezio : ");
    scanf("%f",&b);
    printf("Digite a Altura do Trapezio : ");
    scanf("%f",&c);
    if((a>0)&&(b>0)&&(c>0)){
        A = ((a+b)*c)/2;
        printf("A Area do Trapezio e: %f",A);
    }
    else{
        printf("Numeros Invalidos!!");
    }
    return 0;
}