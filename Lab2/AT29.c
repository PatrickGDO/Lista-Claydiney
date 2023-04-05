#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b,c,d,e=0;
    srand(time(NULL));
    for(a=0;a<5;++a){
        c = rand()%100;
        b = rand()%100;
        printf("Some Este dois Numeros!!\n");
        printf("%d+%d\n",b,c);
        scanf("%d",&d);
        if(d==c+b){
            printf("Questao Correta!!\n");
            e++;
        }
        else{
            printf("Questao Incorreta!!\n");
        }
    }
    printf("Voce Acertou %d Questoes",e);
    return 0;
}