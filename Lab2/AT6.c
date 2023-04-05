#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b;
    printf("Digite um numero : ");
    scanf("%d",&a);
    printf("Digite outro numero : ");
    scanf("%d",&b);
    if(a>b){
        printf("O Maior Digito e : %d\n",a);
        printf("E a Diferenca entre eles e de : %d",a-b);
    }
    else{
        printf("O Maior Digito e : %d\n",b);
        printf("E a Diferenca entre eles e de : %d",b-a);
    }
    return 0;
}