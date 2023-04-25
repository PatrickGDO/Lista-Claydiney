#include <stdio.h>
#include <stdlib.h>

int Soma_dos_Algarismos(int A);

int main(){
    int a,b;
    printf("Digite um numero inteiro positivo : ");
    scanf("%d",&a);
    b = Soma_dos_Algarismos(a);
    if(b<0){
        printf("Numero invalido!!!");
    }
    else{
        printf("A Soma dos Algarismos do numero eh : %d ",b);
    }
    return 0;
}

int Soma_dos_Algarismos(int A){
    int Soma = 0 ;
    if(A>0){
        while(A>0){
            Soma = Soma + A%10;
            A = A/10;
        }
        return Soma;
    }
    else{
        return -1;
    }
}