#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a;
    printf("Digite a Idade de um narador : ");
    scanf("%d",&a);
    if((a>=5)&&(a<=7)){
        printf("Infantil A");
    }
    if((a>=8)&&(a<=10)){
        printf("Infantil B");
    }
    if((a>=11)&&(a<=13)){
        printf("Juvenil A");
    }
    if((a>=14)&&(a<=17)){
        printf("Juvenil B");
    }
    if(a>=18){
        printf("Senior");
    }
    return 0;
}