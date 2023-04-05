#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b,c;
    printf("Digite o Ano Desejado : ");
    scanf("%d",&a);
    printf("Digite o Mes Desejado : ");
    scanf("%d",&b);
    printf("Digite o Dia Desejado : ");
    scanf("%d",&c);
    if((a%400==0)||((a%4==0)&&(a%100!=0))){
        switch(b){
            case 1:
                printf("Mes de Janeiro\n");break;
            case 2:
                printf("Mes de Fevereiro\n");break;
            case 3:
                printf("Mes de Marco\n");break;
            case 4:
                printf("Mes de Abril\n");break;
            case 5:
                printf("Mes de Maio\n");break;
            case 6:
                printf("Mes de Junho\n");break;
            case 7:
                printf("Mes de Julho\n");break;
            case 8:
                printf("Mes de Agosto\n");break;
            case 9:
                printf("Mes de Setembro\n");break;
            case 10:
                printf("Mes de Outubro\n");break;
            case 11:
                printf("Mes de Novembro\n");break;
            case 12:
                printf("Mes de Dezembro\n");break;
            default:
                printf("Mes invalido!!");break;
        }
        if(((c<=31)&&(c>=1))&&((b==1)||(b==3)||(b==4)||(b==5)||(b==6)||(b==7)||(b==8)||(b==9)||(b==10)||(b==11)||(b==12))){
            printf("O Dia e Valido!!");
        }
        if(((c<=29)&&(c>=1))&&(b==2)){
            printf("O Dia e Valdido!!");
        }
        if((c<=0)||(c>31)){
            printf("O Dia e Invalido!!");
        }
    }
    else{
        switch(b){
            case 1:
                printf("Mes de Janeiro\n");break;
            case 2:
                printf("Mes de Fevereiro\n");break;
            case 3:
                printf("Mes de Marco\n");break;
            case 4:
                printf("Mes de Abril\n");break;
            case 5:
                printf("Mes de Maio\n");break;
            case 6:
                printf("Mes de Junho\n");break;
            case 7:
                printf("Mes de Julho\n");break;
            case 8:
                printf("Mes de Agosto\n");break;
            case 9:
                printf("Mes de Setembro\n");break;
            case 10:
                printf("Mes de Outubro\n");break;
            case 11:
                printf("Mes de Novembro\n");break;
            case 12:
                printf("Mes de Dezembro\n");break;
            default:
                printf("Mes invalido!!");break;
        }
        if(((c<=31)&&(c>=1))&&((b==1)||(b==3)||(b==4)||(b==5)||(b==6)||(b==7)||(b==8)||(b==9)||(b==10)||(b==11)||(b==12))){
            printf("O Dia e Valido!!");
        }
        if(((c<=28)&&(c>=1))&&(b==2)){
            printf("O Dia e Valdido!!");
        }
        if((c<=0)||(c>31)){
            printf("O Dia e Invalido!!");
        }

    }
    return 0;
}