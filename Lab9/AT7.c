#include <stdlib.h>
#include <stdio.h>

int main(){
    int A[10],i,*p,*p1,*p2,menor,maior;
    p1 = &maior;
    p2 = &menor;
    p=A;
    for(i=0;i<10;i++){
        printf("Digite um Numero Inteiro : ");
        scanf("%d",p);
        if(i==0){
            menor = *p;
            maior = *p;
        }
        if(*p>maior){
            *p1 = *p;
        }
        if(*p<menor){
            *p2 = *p;
        }
        p++;
    }
    printf("O Maior Numero Digitado eh: %d \n",*p1);
    printf("O Menor Numero Digitado eh: %d \n",*p2);
    return 0;
}