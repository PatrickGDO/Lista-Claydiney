#include <stdio.h>
#include <stdlib.h>

int main(){
    int A,B,*p1,*p2;
    p1=&A;
    p2=&B;
    printf("Digite um Numero Inteiro : ");
    scanf("%d",p1);
    printf("Digite um Numero Inteiro : ");
    scanf("%d",p2);

    printf("Soma = %d\nProduto = %d\n",*p1+(*p2),*p1*(*p2));
    if(*p1>*p2){
        printf("Subtracao = %d\n",*p1-(*p2));
    }
    else{
        printf("Subtracao = %d\n",*p2-(*p1));
    }
    if(*p1!=0&&*p2!=0){
        if(*p1>*p2){
            printf("Divisao = %d\n",*p1/(*p2));
        }
        else{
            printf("Divisao = %d\n",*p2/(*p1));
        }
    }
    else{
        printf("Divisao = %d\n",0);
    }
    return 0;
}