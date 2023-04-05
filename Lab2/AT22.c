#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b;
    printf("Digite a Sua Idade : ");
    scanf("%d",&a);
    printf("Digite o seu tempo de Servico : ");
    scanf("%d",&b);
    if((a>=65)||(b>=30)||((a>=60)&&(b>=25)))
    {
        printf("Voce pode se aposentar");
    }
    else{
        printf("Voce nao pode se aposentar");
    }
    return 0;
}