#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[4][4],i,j,b=0;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Digite um numero: ");
            scanf("%d",&a[i][j]);
            if(a[i][j]>10){
                b++;
            }
        }
    }
    printf("Tem %d numeros Maiores que 10 !!\n",b);
    return 0;
}