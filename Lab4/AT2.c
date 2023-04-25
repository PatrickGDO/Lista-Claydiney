#include <stdio.h>
#include <stdlib.h>

void Data_mes(int A,int B,int C);

int main(){
    int a,b,c;
    printf("Digite Dia: ");
    scanf("%d",&a);
    printf("Digite o Mes: ");
    scanf("%d",&b);
    printf("Digite o Ano: ");
    scanf("%d",&c);
    Data_mes( a,b,c );
    return 0;
}

void Data_mes(int A,int B,int C){
    if((C<1)||(C>2023)){
        printf("Ano Invalido!!\n\n");//Comando que tira Anos Invalido
    }
    else{
        if(B==2){//Separando Fevereiro pois tem no maximo 29 dias
            if((A<1)||(A>29)){
                printf("Dia invalido!!");
            }
            else{
                printf("%d de Fevereiro de %d",A,C);
            }
        }
        else{
            if((A<1)||(A>31)){//Limitando os Dias para que esteja entre 1 a 31
                printf("Dia Invalido!!");
            }
            else{
                if((B>12)||(B<1)){//Retirando Mes Invalido
                    printf("Mes invalido!!");
                }
                else{
                    printf("%d de ",A);// Adicionando printf do Dia para não dar Problema
                    switch(B){
                        case 1: printf("Janeiro de");break;
                        case 3: printf("Marco de");break;
                        case 4: printf("Abril de");break;
                        case 5: printf("Maio de");break;
                        case 6: printf("Junho de");break;
                        case 7: printf("Julho de");break;
                        case 8: printf("Agosto de");break;
                        case 9: printf("Setembro de");break;
                        case 10: printf("Outubro de");break;
                        case 11: printf("Novembro de");break;
                        case 12: printf("Dezembro de");break;
                    }
                   printf(" %d",C);// para Finalizar a Função
                }
                
            }

        }

    }

}