#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b=0,c=0;
    a=1000;
    while(b<a){
        if((b%5==0)||(b%3==0)){
            c=c+b;
            b++;
        }
        else{
            b++;
            continue;
        }
    }
    printf("A Soma dos Numeros Naturais Abaixos de 1000 que sao multiplos de 5 e 3 : %d ",c);
    return 0;
}