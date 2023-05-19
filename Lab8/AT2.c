#include <stdlib.h>
#include <stdio.h>

int main(){
    int A,*p1;
    float B,*p2;
    char C,*p3;

    printf("Digite um Numero inteiro : ");
    scanf(" %d",&A);
    printf("Digite um Numero Real : ");
    scanf(" %f",&B);
    printf("Digite um Caractere : ");
    scanf(" %c",&C);
    p1=&A;
    p2=&B;
    p3=&C;
    printf(" %d\n",*p1);
    printf(" %.2f\n",*p2);
    printf(" %c\n",*p3);

    printf("Digite um Outro Numero Inteiro : ");
    scanf(" %d",p1);
    printf("Digite um Outro Numero Real : ");
    scanf(" %f",p2);
    printf("Digite um Outro Caractere : ");
    scanf(" %c",p3);

    printf("Os Valor Inteiro Modificado eh : %d\nO Valor Real Modificado eh: %.2f\nO Caractere Modificado eh : %c\n",*p1,*p2,*p3);
    return 0;
}