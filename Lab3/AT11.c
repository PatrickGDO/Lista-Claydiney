#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,B;
    do{
        printf ("Digite um numero inteiro positivo : ");
        scanf(" %d",&a);
    }while(a<0);
    B=0;
    while(B<=a){
        printf("%d\n",B);
        B++;
    }
    return 0;
}