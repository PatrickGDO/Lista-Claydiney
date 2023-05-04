#include <stdio.h>
#include <stdlib.h>

int main(){
    int A[4][4],i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Digite um numero entre 1 a 20 : ");
            scanf("%d",&A[i][j]);
            if(A[i][j]<1||A[i][j]>20){
                printf("\nNumero invalido !!");
                printf("\nDigite um Outro Numero!!\n\n");
                j--;
            }
        }
    }
    printf("\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("[%-2d] ",A[i][j]);
            if(j==3){
                printf("\n");
            }
        }
    }
    printf("\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(j>i){
                A[i][j]=0;
            }
            printf("[%-2d] ",A[i][j]);
            if(j==3){
                printf("\n");
            }
        }
    }
    return 0;
}