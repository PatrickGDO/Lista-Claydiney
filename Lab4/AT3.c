#include <stdio.h>
#include <stdlib.h>

int tipo (int a);

int main(){
    int a,b;
    printf("Digite um numero : ");
    scanf("%d",&a);
    b = tipo(a);
    if(b<0){
        printf("numero negativo!!");
    }
    if(b==0){
        printf("Numero igual a Zero!!");
    }
    if(b>0){
        printf("Numero Positivo!!");
    }
    return 0;
}

int tipo(int a){
    if(a<0){
        return -1;
    }
    if(a>0){
        return 1;
    }
    if(a==0){
        return 0;
    }
}