#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Quard_perf(int A);

int main(){
    int a;
    printf("Digite um numero : ");
    scanf("%d",&a);
    Quard_perf(a);
    return 0;
}



void Quard_perf(int A){
    int B,C;
    B = sqrt(A);
    C = B*B;
    if( A < 0  ){
        printf("Numero Negativo!!");
    }
    else{
        if( C == A ){
            printf("Quadrado Perfeito!!");
        }
            else{
                printf("Nao e um Quadrado Perfeito!!");
            }
    }
}