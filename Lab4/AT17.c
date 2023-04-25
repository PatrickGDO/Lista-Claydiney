#include <stdio.h>
#include <stdlib.h>

int soma_de_N(int A,int B);

int main(){
    int a[2],i,b;
    for(i=0;i<2;i++){
        printf("Digite um numero inteiro : ");
        scanf("%d",&a[i]);
        if(a[i]<0){
            printf("\nNumero Invalido!!\n");
            i--;
        }
    }
    b = soma_de_N(a[0],a[1]);
    printf("A soma dos numeros entre os numeros digitados eh : %d ",b);
    return 0 ;

}

int soma_de_N(int A,int B){
    int C = 0,D = 0;
    for(;A>0;){
        C = C + A%10;
        A = A/10; 
    }
    for(;B>0;){
        D = D + B%10;
        B = B/10;
    }
    return D+C;
}