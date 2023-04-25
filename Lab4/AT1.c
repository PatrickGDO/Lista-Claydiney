#include <stdio.h>
#include <stdlib.h>

int dobro(int a);

int main(){
    int num,dobr;//num = numero recebido , dobr = dobro do numero
    printf("Digite um numero : \n");
    scanf("%d",&num);
    dobr=dobro(num);
    printf("o dobro do numero eh : %d\n",dobr);
    return 0;
    }

    int dobro(int a){
        return a*2;
    }