#include <stdio.h>
#include <stdlib.h>

int Sem_Funcao(int X,int Z);

int main(){
    int x,z,a;
    printf("Digite um Valor inteiro : ");
    scanf("%d",&x);
    printf("Digite um numero inteiro para ser o expoente do numero %d : ",x);
    scanf("%d",&z);
    a = Sem_Funcao(x,z);
    printf("O Resultado eh : %d",a);
    return 0;
}


int Sem_Funcao(int X,int Z){
    int A,B=1;
    for(A=0;A<Z;A++){
        B = B * X;
    }
    return B;
}