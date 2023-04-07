#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b=0,c=0;
    do{
        printf("Digite um numero inteiro : ");
        scanf("%d",&a);
        c=c+a;
        b++;
    }while(b<10);
    printf("A media dos numeros e: %d ",c/b);
    return 0;
}