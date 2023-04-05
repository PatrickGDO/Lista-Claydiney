#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b=0;
    printf("Digite um numero inteiro maior que 0 : ");
    scanf("%d",&a);
    if(a>0){
        while(a>0){
            b=b+a%10;
            a=a/10;
        }

        printf("A soma dos Algarismos e : %d",b);
    }
    else{
        printf("Numero invalido");
    }
    return 0;

}