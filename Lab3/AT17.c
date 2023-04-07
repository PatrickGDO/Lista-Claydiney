#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float chico,Ze,ano=0;
    for(chico = 1.50,Ze = 1.10; Ze<chico;chico=chico+0.02,Ze=Ze+0.03){
        ano++;
    }
    printf("Tamanho de Chico: %.2f, Tamanho de Ze : %.2f Depois de : %.0f anos\n",chico,Ze,ano);
    printf("Precisa de %.0f anos para que Ze fique maior que Chico!!",ano);
    return 0;
}