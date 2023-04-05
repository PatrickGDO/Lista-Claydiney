#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b,c;
    printf("Digite um numero : ");
    scanf("%d",&a);
    if(a>=0){
        b = sqrt(a);
        c = pow(a,2);
        printf("O Numero ao quadrado : %d\n",c);
        printf("A Raiz Quadrado do numero : %d\n",b);
    }
    return 0;
}