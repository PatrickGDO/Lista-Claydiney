#include <stdio.h>
#include <stdlib.h>

int fatorial(int A);

int main(){
    int a,b;
    do{
        printf("Digite um numero positivo : ");
        scanf("%d",&a);
        if(a<0){
            printf("\nNumero invalido!!\n");
        }
    }while(a<0);
    b = fatorial(a);
    printf("o fatorial do numero %d eh: %d ",a,b);
    return 0;
}

int fatorial(int A){
    if(A==1){
        return 1;
    }
    else{
        return A* fatorial(A-1);
    }
}