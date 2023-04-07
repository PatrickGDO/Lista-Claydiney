#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int A, B,conta;
    printf ("Digite o Numero que Deseja saber os 5 primeiros Multiplos : ");
    scanf (" %d", &A);
    B = 1;
    for (; B < 6 ; B++ ){
        conta=A*B;
        printf("O numero multiplo de %d e : %d\n",A,conta);
    }
    return 0;
}