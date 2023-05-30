#include <stdlib.h>
#include <stdio.h>

int main(){
    int A[5],B,*p,i;
    p=A;
    printf("Digite um Numero : ");
    scanf("%d",&B);
    for(i=0;i<5;i++,p++){
        *p=B;
        printf("a Posisao %d do array tem o numero : %d\n",i,*p);
    }
    return 0;

}