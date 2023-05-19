#include <stdio.h>
#include <stdlib.h>

int main(){
    int A[6],i,*p1;
    for(i=0;i<6;i++){
        printf("Digite um Numero Inteiro : ");
        scanf(" %d",&A[i]);    
    }
    p1=&A[0];
    for(i=0;i<6;i++,p1++){
        printf("O Numero eh : %d O Endereco eh : %p \n",*p1,p1);
    }
    return 0;

}