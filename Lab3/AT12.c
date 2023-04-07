#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b,soma=0,divisor=0;
    printf("Digite o numero que deseja somar os seus divisores : ");
    scanf("%d",&a);
    for(b=2;b<=a;b++){
        if(a%b!=0){
            continue;
        }
        else{
            divisor = a/b;
            soma = soma+divisor;
        }
    }
    printf("A soma dos divisores e: %d ",soma);
    return 0;
}