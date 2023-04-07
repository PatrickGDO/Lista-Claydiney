#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b,quant;
    float soma=2;
    for(a=3;a<=2000000;a+=2){
        quant = 2;
        for(b=3;b <= sqrt(a);b+=2){
            if(a % b == 0){
                quant+= 2;
                break;
            }
        }
        if(quant==2){
            soma+=a;
        }
    }
    printf("A soma dos Numeros Primos e : %.0f ",soma);
    return 0;
}