#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a[10],i,b,c,d;
    for(i=0;i<10;i++){
        printf("Digite um numero inteiro positivo : ");
        scanf("%d",&a[i]);
        if(a[i]<0){
            printf("Numero invalido!!");
            i--;
        }
    }
    for(i=0;i<10;i++){
        if(a[i]==1){
            printf("1 Nao e Primo !!\n");
        }
        else{
            d=1;
            b=sqrt(a[i]);
            for(c=2;c<=b;c++){
                if(a[i]%c==0){
                    d+=1;
                    break;
                }
            }
            if(d==1){
                printf("O Numero %d eh primo no vetor [%d]\n",a[i],i);
            }
        }
    }
    return 0;
}