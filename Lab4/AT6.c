#include <stdio.h>
#include <stdlib.h>

int Conver(int A,int B,int C);

int main(){
    int a,b,c,d;
    printf("Digite Quantas horas Minutos e Segundos deseja converter para segundos : ");
    scanf("%d %d %d",&a,&b,&c);
    d = Conver(a,b,c);
    printf("A Conversao dos numeros para segundos eh : %d",d);
    return 0;
}

int Conver(int A,int B,int C){
    int HORAS,MINUTOS,SEGUNDOS;
    HORAS = A*3600;
    MINUTOS = B*60;
    SEGUNDOS = C;
    return HORAS+MINUTOS+SEGUNDOS;
}