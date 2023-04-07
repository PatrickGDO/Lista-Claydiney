#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b=0,c=0;
    while(b<10){
        printf("Digite um numero inteiro positivo : ");
        scanf("%d",&a);
        if(a<0){
            continue;
        }
        else{
            c=c+a;
            ++b;
        }
    }
    printf("A Media e : %d",c/b);
    return 0;
}