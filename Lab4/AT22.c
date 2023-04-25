#include <stdio.h>
#include <stdlib.h>

void Lateral(int A);

int main(){
    int a;
    printf("Digite a Larguta do Triangulo Lateral : ");
    scanf("%d",&a);
    Lateral(a);
    return 0;
}


void Lateral(int A){
    int a,b = 2*A-1,c;
    for(a=0;a<b;a++){
        if(a<A){
        for(c=A-a;c<=A;c++){
            printf("*");
        }
        }
        else{
            for(c=A;c>1;c--){
                printf("*");
            }
            A--;
        }
        printf("\n");
    }


}