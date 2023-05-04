#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,B[6];
    for(a=0;a<6;a++){
        printf("Digite um numero : ");
        scanf("%d",&B[a]);
    }
    for(a=5;a>=0;a--){
        printf("%d\n",B[a]);
    }
    return 0;
}