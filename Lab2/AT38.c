#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b,c;
    printf("Digite Seu Dia de Nascimento : ");
    scanf("%d",&c);
    printf("Digite Seu Mes de Nascimento : ");
    scanf("%d",&b);
    printf("Digite Seu Ano de Nascimento : ");
    scanf("%d",&a);
    if((a%400==0)||((a%4==0)&&(a%100!=0))){
        switch(b){
            case 1:
                printf("\nMes de Janeiro\n");break;
            case 2:
                printf("\nMes de Fevereiro\n");break;
            case 3:
                printf("\nMes de Marco\n");break;
            case 4:
                printf("\nMes de Abril\n");break;
            case 5:
                printf("\nMes de Maio\n");break;
            case 6:
                printf("\nMes de Junho\n");break;
            case 7:
                printf("\nMes de Julho\n");break;
            case 8:
                printf("\nMes de Agosto\n");break;
            case 9:
                printf("\nMes de Setembro\n");break;
            case 10:
                printf("\nMes de Outubro\n");break;
            case 11:
                printf("\nMes de Novembro\n");break;
            case 12:
                printf("\nMes de Dezembro\n");break;
            default:
                printf("Mes Invalido!!\n");break;
        }
        if(((c<=31)&&(c>=1))&&((b==1)||(b==3)||(b==5)||(b==7)||(b==8)||(b==10)||(b==12))){
            printf("O Dia e Valido!!\n");
            if(a<=2022){
                printf("Data Valida!!\n");
                
            }
            else{
                printf("Ano invalido!!\n");
                printf("Data Invalida!!\n");
            }
        }
        if(((c<=30)&&(c>=1))&&((b==4)||(b==6)||(b==9)||(b==11))){
            printf("O Dia e Valido!!\n");
            if(a<=2022){
                printf("Data Valida!!\n");
            }
            else{
                printf("Ano invalido!!\n");
                printf("Data Invalida!!\n");
            }
        }
        if(((c<=29)&&(c>=1))&&(b==2)){
            printf("O Dia e Valdido!!\n");
            if(a<=2022){
                printf("Data Valida!!\n");
            }
            else{
                printf("Ano invalido!!\n");
                printf("Data Invalida!!\n");
            }
        }
        if((c<=0)||(c>31)){
            printf("O Dia e Invalido!!\n");
            if(a<2022){
                printf("Ano Valido!!\n");
                printf("Data Invalida!!");
            }
            else{
                printf("Ano Invalido!!\n");
                printf("Data Invalida!!");
            }
        }
    }
    else{
        switch(b){
            case 1:
                printf("\nMes de Janeiro\n");break;
            case 2:
                printf("\nMes de Fevereiro\n");break;
            case 3:
                printf("\nMes de Marco\n");break;
            case 4:
                printf("\nMes de Abril\n");break;
            case 5:
                printf("\nMes de Maio\n");break;
            case 6:
                printf("\nMes de Junho\n");break;
            case 7:
                printf("\nMes de Julho\n");break;
            case 8:
                printf("\nMes de Agosto\n");break;
            case 9:
                printf("\nMes de Setembro\n");break;
            case 10:
                printf("\nMes de Outubro\n");break;
            case 11:
                printf("\nMes de Novembro\n");break;
            case 12:
                printf("\nMes de Dezembro\n");break;
            default:
                printf("Mes Invalido!!\n");break;
        }
        if(((c<=31)&&(c>=1))&&((b==1)||(b==3)||(b==5)||(b==7)||(b==8)||(b==10)||(b==12))){
            printf("O Dia e Valido!!\n");
            if(a<=2022){
                printf("Data Valida!!\n");
            }
            else{
                printf("Ano invalido!!\n");
                printf("Data Invalida!!\n");
            }
        }
        if(((c<=30)&&(c>=1))&&((b==4)||(b==6)||(b==9)||(b==11))){
            printf("O Dia e Valido!!\n");
            if(a<=2022){
                printf("Data Valida!!\n");
            }
            else{
                printf("Ano invalido!!\n");
                printf("Data Invalida!!\n");
            }
        }
        if(((c<=29)&&(c>=1))&&(b==2)){
            printf("O Dia e Valdido!!\n");
            if(a<=2022){
                printf("Data Valida!!\n");
            }
            else{
                printf("Ano invalido!!\n");
                printf("Data Invalida!!\n");
            }
        }
        if((c<=0)||(c>31)){
            printf("O Dia e Invalido!!\n");
            if(a<2022){
                printf("Ano Valido!!\n");
                printf("Data Invalida!!");
            }
            else{
                printf("Ano Invalido!!\n");
                printf("Data Invalida!!");
            }
        }
    } 
    return 0;
}