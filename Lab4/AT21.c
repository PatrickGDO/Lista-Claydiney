#include <stdio.h>
#include <stdlib.h>

void Coluna(int A);

int main(){
    int a;
    printf("Digite a quantidade de ! que deseja : ");
    scanf("%d",&a);
    Coluna(a);
    return 0;
}

void Coluna(int A){
    int a,b;
    for(a=0;a<A;a++){
        for(b=0;b<=a;b++){
            printf("!");
        }
        printf("\n");
    }
}