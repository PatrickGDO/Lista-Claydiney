#include <stdlib.h>
#include <stdio.h>

int main(){
    int A,B,*p1,*p2;
    printf("Digite um Numero Inteiro : ");
    scanf("%d",&A);
    printf("Digite um Numero Inteiro : ");
    scanf("%d",&B);
    p1=&A;
    p2=&B;
    *p1=2*(*p1);
    *p2=2*(*p2);
    printf("A Soma do Dobros dos Numeros eh: %d\n",*p1+*p2);
    return 0;
}