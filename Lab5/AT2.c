#include <stdio.h>
#include <stdlib.h>

int main(){
    int X,Y,vet[8],a;
    for(X=0,Y=1,a=0;a<4;X+=2,Y+=2,a++){
        printf("Digite um Valor para X : ");
        scanf("%d",&vet[X]);
        printf("Digite um Valor para Y : ");
        scanf("%d",&vet[Y]);
    }
    for(X=0,Y=1,a=0;a<4;X+=2,Y+=2,a++){
        printf("A soma dos Valores eh : %d \n",vet[X]+vet[Y]);
    }
    return 0;

}