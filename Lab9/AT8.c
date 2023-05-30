#include <stdlib.h>
#include <stdio.h>

int main(){
    int A,*B,**C,***D;
    B=&A;
    C=&B;
    D=&C;
    printf("Digite um Numero : ");
    scanf("%d",B);
    printf("O Dobro no Numero eh: %d\n",(*B)*2);
    printf("O Triplo do Numero eh: %d\n",(**C)*3);
    printf("O Quadruplo do Numero eh: %d",(***D)*4);
    return 0;

}