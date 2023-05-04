#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[6],i,Par=0,Impar=0;
    for(i=0;i<6;i++){
        printf("Digite um Numero : ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<6;i++){
        if(a[i]%2==0){
            printf("Numero Par %d \n",a[i]);
            Par=Par+a[i];
        }
        else{
            printf("Numero Impar %d \n",a[i]);
            Impar++;
        }
    }
    printf("\nA Soma dos Numeros Pares eh : %d \n",Par);
    printf("A Quantidade de Numeros Impares eh : %d ",Impar);
    return 0;
}