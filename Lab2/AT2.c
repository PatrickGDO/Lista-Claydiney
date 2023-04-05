#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b;
    printf("Digite um Numero : \n");
    scanf("%d",&a);
    if(a>=0){
        b=sqrt(a);
        printf("A raiz Quadrada do Numero e : %d\n",b);

    }
    else{
        printf("O numero e invalido!!");
    }

    return 0;

}