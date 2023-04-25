#include <stdio.h>
#include <stdlib.h>

void Operacao(float A,float B,char C);

int main(){
    float a,b;
    char c;
    printf("Digite um numero : ");
    scanf(" %f",&a);
    printf("Digite um numero : ");
    scanf(" %f",&b);
    printf("Digite um simbolo sendo eles : + para soma, - para subtracao, * para multiplicacao e / para divisao : ");
    scanf(" %c",&c);
    Operacao(a,b,c);
    return 0;
}

void Operacao(float A,float B,char C){
    float D;
    switch(C){
        case '+': 
            D = A+B;
            printf("A Soma dos numeros %f,%f eh : %f ",A,B,D);break;
        case '-':
            if(A>B){
                D = A-B;
                printf("A Subtracao dos numeros %f,%f eh : %f ",A,B,D);break;
            }
            else{
                D = B-A;
                printf("A Subtracao dos numeros %f,%f eh : %f ",B,A,D);break;
            }
        case '*':
            D = A*B;
            printf("O Produto dos numeros %f,%f eh : %f ",A,B,D);break;
        case '/':
            if(A>B){
                D = A/B;
                printf("A divisao dos numeros %f,%f eh : %f ",A,B,D);break;
            }
            else{
                D = B/A;
                printf("A divisao dos numeros %f,%f eh : %f ",B,A,D);break;
            }
        default :
            printf("Simbolo invalido!!");
    }
}