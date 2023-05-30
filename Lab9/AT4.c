#include <stdlib.h>
#include <stdio.h>

int main(){
    int A[5],*p,i;
    p=A;
    for(i=0;i<5;i++){
        printf("Digite um Numero : ");
        scanf("%d",p+i);
    }
    for(i=0;i<5;i++){
        if(*(p+i)%2==0){
            printf("O Numero Par %d fica na posicao : %p",i,p+i);
            printf("\n");
        }
    }
    return 0;
}