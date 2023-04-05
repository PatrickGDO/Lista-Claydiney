#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b,c,Delta,x,z;
    printf("Digite a Variavel de a : ");
    scanf("%d",&a);
    printf("Digite a Variavel de b : ");
    scanf("%d",&b);
    printf("Digite a Variavel de c : ");
    scanf("%d",&c);
    Delta = pow(b,2)-4*a*c;
    if(a!=0){
        if(Delta<0){
            printf("Nao existe raiz");
        }
        if(Delta==0){
            x=-b/2*a;
            printf("E uma Raiz unica\n");
            printf("Raiz : %d",x);
        }
        if(Delta>0){
            x=(-b-Delta)/2*a;
            z=(-b+Delta)/2*a;
            printf("A Raiz com o Delta positivo: %d\n",z);
            printf("A Raiz com o Delta negativo: %d\n",x);
        }
    }
    else{
        printf("Nao e equacao de segundo grau!!");
    }
    return 0;
}