#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b,c;
    printf("Digite a Distancai percorida do carro em KM : ");
    scanf("%d",&a);
    printf("Digite a Quantidade de litros de gasolina consumidas pelo carro : ");
    scanf("%d",&b);
    c=a/b;
    if(c<8){
        printf("Venda o Carro!!");
    }
    if((c>=8)&&(c<=14)){
        printf("Carro Economico!!");
    }
    if(c>14){
        printf("Carro Super Economico!!");
    }
    return 0;
}