#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[10],i=0,b,cont;
    for(;i<10;i++){
        printf("Digite um numero : ");
        scanf("%d",&a[i]);
        for(b=0,cont=0;b<=i;b++){
            if(a[i]==a[b]){
                cont++;
            }
            if(cont==2){
                break;
            }
        }
        if(cont==2){
            printf("%d e %d Sao Numeros Iguis !!\n",a[i],a[b]);
            printf("Digite outro Numero!!\n");
            i--;
        }
    }
    printf("Numero: %d",a[9]);
    return 0;
}