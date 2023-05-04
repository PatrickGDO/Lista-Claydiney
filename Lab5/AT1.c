#include <stdio.h>
#include <stdlib.h>

int main(){
    int A[6]={1,0,5,-2,-5,7},i,a;
    i = A[0] + A[1] + A[5];
    printf("a soma dos valores na posicoes A[0], A[1] e A[5] : %d\n",i);
    A[4]=100;
    for(a=0;a<6;a++){
        printf("%d",A[a]);
        printf("\n");
    }
    return 0;
}   