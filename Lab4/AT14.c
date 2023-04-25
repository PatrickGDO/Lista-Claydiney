#include <stdio.h>
#include <stdlib.h>

int Consumo(float A,float L);

int main(){
    float km,L,M;
    printf("Digite uma distancia em Km : ");
    scanf(" %f",&km);
    printf("Digite a quantidade de litors consumidos por um carro em um percurso : ");
    scanf(" %f",&L);
    M = Consumo(km,L);
    if( M == -1 ){
        printf("litro Invalido!!");
    }
    else{
        if(M<8){
            printf("Venda o Carro!");
        }
        if(M>8&&M<14){
            printf("Economico!");
        }
        if(M>14){
            printf("Super Economico!");
        }
    }
    return 0;
}

int Consumo(float A,float L){
    float Consumo;
    if(L>0){
        Consumo = A/L;
        return Consumo;
    }
    else{
        return -1;
    }
}