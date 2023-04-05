#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b,c;
    printf("Digite O Valor de um lado do Triangulo : ");
    scanf("%d",&a);
    printf("Digite O Valor de um outro lado do Triangulo : ");
    scanf("%d",&b);
    printf("Digite O Valor de um outro lado do Triangulo : ");
    scanf("%d",&c);
    if((a<b+c)&&(b<a+c)&&(c<a+b)){
        if((a==b&&a==c)){
            printf("E um Triangulo Equilatero!!");
        }
        else{
        if((a!=b)&&(a!=c)&&(b!=c)){
            printf("E um Triangulo Escaleno!!");
        }
        else{
            printf("E um Triangulo Isosceles!!");
        }
        }
    }
    else{
        printf("Nao e um Triangulo!!");
        return 0;
    }       
}