#include <stdio.h>
#include <stdlib.h>

int Triangulo(float A,float B,float C);
void Tipo(float A,float B,float C);

int main(){
    float a[3];
    int i,b;
    for(i = 0;i<3;i++){
        printf("Digite um Valor : ");
        scanf(" %f",&a[i]);
        if(a[i]<0){
            printf("\nValor invalido!!\n");
            printf("Valor precisa ser positivo!!\n");
            i--;
        }
    }
    b = Triangulo(a[0],a[1],a[2]);
    if(b<0){
        printf("Nao e um Triangulo!!");
    }
    else{
        printf("Um Triangulo");
        Tipo(a[0],a[1],a[2]);
    }
    return 0;
}

int Triangulo(float A,float B,float C){
    if((A<B+C)&&(B<A+C)&&(C<B+A)){
        return 1;
    }
    else{
        return -1;
    }
}

void Tipo(float A,float B,float C){
    if((A==B)&&(B==C)){
        printf(" Equilatero!!");
    }
    if(((A==B)&&(A!=C))||((A==C)&&(A!=B))||((B==C)&&(B!=A))){
        printf(" Isosceles!!");
    }
    if((A!=B)&&(A!=C)&&(B!=C)){
        printf(" Escaleno!!");
    }
}