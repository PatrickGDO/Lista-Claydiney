#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int Estado;
    float a,b;
    printf("Digite o Valor do produto : ");
    scanf("%f",&a);
    do{
        printf("1-MG\n");
        printf("2-SP\n");
        printf("3-RJ\n");
        printf("4-MS\n\n");
        printf("Digite a Opcao que deseja :  ");
        scanf("%d",&Estado);
        if(((Estado<1)||(Estado>4))){
            printf("Numero Invalido!!\n\n");
        }
    }while((Estado<1)||(Estado>4));
    switch(Estado){
        case 1:
            b=a*0.07;
            printf("O Valor do Produto com o Imposto que deve ser pago neste estado e de : %.2f Faz o L",(float)a+b);break;
        case 2:
            b=a*0.12;
            printf("O Valor do Produto com o Imposto que deve ser pago neste estado e de : %.2f Faz o L",(float)a+b);break;
        case 3:
            b=a*0.15;
            printf("O Valor do Produto com o Imposto que deve ser pago neste estado e de : %.2f Faz o L",(float)a+b);break;
        case 4:
            b=a*0.08;
            printf("O Valor do Produto com o Imposto que deve ser pago neste estado e de : %.2f Faz o L",(float)a+b);break;
    }
    return 0;
}