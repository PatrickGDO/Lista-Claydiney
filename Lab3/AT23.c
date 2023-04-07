#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,c,d=1;
    char e='A';
    printf("Digite Quantos Ramos Deseja : ");
    scanf("%d",&a);
    for(b=1;b<=a;b++,e++){
        for(c=1;c<=b;c++){
            printf("%c ",e);
            d++;
        }
        printf("\n");
    }
    return 0;
}