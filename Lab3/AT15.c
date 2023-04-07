#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int b,c;
    float a,e;
    do{
        printf("Digite um numero : ");
        scanf(" %f",&a);
        if(a>0){
            b = pow(a,2);
            c = pow(a,3);
            e = sqrt(a);
            printf("\nO Numero ao Quadrado e : %d\n",b);
            printf("O Numero ao Cubo e : %d\n",c);
            printf("A Raiz do Numero e : %.2f\n\n",e);
        }
    }while(a>0);
        return 0;
    }