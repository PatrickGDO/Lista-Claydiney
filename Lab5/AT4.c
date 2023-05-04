#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[5],i,cont,b;
    for(i=0;i<5;i++){
        printf("Digite um numero : ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        for(b=0,cont=0;b<5;b++){
            if(a[i]>=a[b]){
                cont++;
            }
            if(cont==5){
                printf("o Maior numero eh : %d \n",a[i]);
            }
        }
    }
    for(i=0;i<5;i++){
        for(b=0,cont=0;b<5;b++){
            if(a[i]<a[b]){
                cont++;
            }
            if(cont==4){
                printf("O Menor numero eh : %d \n",a[i]);
            }
        }
    }
    return 0;
}