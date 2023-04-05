#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a,b,c,d;
    printf("Digite o Custo da Fabrica : ");
    scanf("%f",&a);
    if(a<=12000.0){
        b=a*0.05;
        d=b+a;
        printf("O Custo do Consumidor e de : %.2f",d);
    }
    if((a>12000.0)&&(a<=25000.0)){
        b=a*0.1;
        c=a*0.15;
        d=a+b+c;
        printf("O Custo do Consumidor e de : %.2f",d);
    }
    if(a>25000.0){
        b=a*0.15;
        c=a*0.20;
        d=a+b+c;
        printf("O Custo do Consumidor e de : %.2f",d);
    }
    return 0;
}