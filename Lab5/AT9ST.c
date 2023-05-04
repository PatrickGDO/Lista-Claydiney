#include <stdio.h>
#include <stdlib.h>

int main(){
    char A[4][20];
    int consumo[4],i,posicarroeco = 0,Economico = 1000;
    for(i=0;i<4;i++){
        printf("Digite o modelo do carro : ");
        scanf("%s",A[i]);
        printf("Digite o consumo em uma distancia de 1000 km : ");
        scanf("%d",&consumo[i]);
        if(consumo[i]<Economico){
            Economico = consumo[i];
            posicarroeco = i;
        }
    }
    printf("O Carro mais Economico eh : %s\n\n",A[posicarroeco]);

    printf("O Carro %s \n",A[0]);
    printf("O Consumo dele em 1000km eh: %d\n\n",consumo[0]);

    printf("O Carro %s \n",A[1]);
    printf("O Consumo dele em 1000km eh: %d\n\n",consumo[1]);

    printf("O Carro %s \n",A[2]);
    printf("O Consumo dele em 1000km eh: %d\n\n",consumo[2]);

    printf("O Carro %s \n",A[3]);
    printf("O Consumo dele em 1000km eh: %d\n\n",consumo[3]);

    return 0;
}