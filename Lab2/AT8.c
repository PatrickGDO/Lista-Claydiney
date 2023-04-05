#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a,b;
    printf("Digite Uma nota do Aluno : ");
    scanf("%f",&a);
    printf("Digite Uma nota do Aluno : ");
    scanf("%f",&b);
    if((b,a<=10.0)&&(b,a>=0.0)){
        printf("A Media da nota do Aluno : %f\n",(b+a)/2);
    }
    else{
        printf("A Nota nao e um Valor Valido!!");
    }
    return 0;


}