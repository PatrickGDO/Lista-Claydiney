#include <stdlib.h>
#include <stdio.h>

int main(){
    int a[4][4],i,j,k,ifinal,jfinal;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Digite um numero : ");
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("[%-4d] ",a[i][j]);
            if(j==3){
                printf("\n");
            }
        }
    }
    for(k=a[0][0],i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(a[i][j]>k){
                k = a[i][j];
                ifinal = i;
                jfinal = j;
            }
        }
    }
    printf("\n");
    if(k==a[0][0]){
        printf("O Maior numero esta localizado no vetor[0][0]");
    }
    else{
        printf("O Maior numero esta localizado no vetor[%d][%d]",ifinal,jfinal);
    }
    return 0;
    }