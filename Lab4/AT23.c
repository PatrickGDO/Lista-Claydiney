#include <stdlib.h>
#include <stdio.h>

void Triangulo(int A);

int main(){
    int a;
    printf("Digite o numero do lado e da altura do Triangulo : ");
    scanf("%d",&a);
    Triangulo(a);
    return 0;
}

void Triangulo(int A){
    int a = 2*A-1,b,c,d;
    for(b=a;b>0;b-=2){
        for(d=0;d<A;d++){
            printf(" ");
        }
        for(c=b;c<=a;c++){
            printf("*");
        }
        A--;
        printf("\n");
    }
}