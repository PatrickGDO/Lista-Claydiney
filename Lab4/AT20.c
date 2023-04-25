#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int primo(int A);

int main(){
    int a,b;
    do{
        printf("Digite um numero positivo : ");
        scanf("%d",&a);
        if(a<0){
            printf("\nNumero invalido!!");
        }
    }while(a<0);
    b = primo(a);
    if(b<0){
        printf("Numero 1 nao e primo!!");
    }
    else{
        printf("a quantidade de numeros primos abaixo do numero %d eh: %d",a,b);
    }
    return 0;
}
int primo(int A){
    int i,B,C,D=0;
    if(A==1){
        return -1;
    }
    else{
        for(i=2;i<=A;i++){
            C = 1;
            for(B=2;B<=sqrt(i);B++){
                if(i%B == 0){
                    C+=1;
                    break;
                }
            }
            if(C==1){
                D++;
            }
        }
        return D;
    }
}