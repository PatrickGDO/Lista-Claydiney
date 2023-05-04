#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[5][5],X,i,j,cont=0;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Digite um Numero : ");
            scanf("%d",&a[i][j]);
        }
    }
    printf("Digite um Numero para descobrir sua localizacao : ");
    scanf("%d",&X);
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(a[i][j]==X){
                printf("Esta localizado no vetor[%d][%d]",i,j);
            }
            else{
                cont++;
            }
        }
    }
    if(cont==25){
        printf("Nao encontrado !!");
    }
    return 0;
}