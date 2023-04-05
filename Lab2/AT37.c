#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b,c,d,e,f,g,h,i,j;
    do{
        printf("Digite a Hora chegada Em par (EX: 13 = Uma hora da Tarde) : ");
        scanf("%d",&a);
        printf("Digite Os Minutos da sua Chegada em Par (EX: 59) : ");
        scanf("%d",&b);
        printf("Digite Quantos Minutos ficou no estacionamento do Parque : ");
        scanf("%d",&c);
        if((a<=0)||(a>24)){
            printf("\nHora Digitada Invalida!!\n\n");
        }
        if((b>59)||(b<0)){
            printf("\nMinutos Digitado Invalido!!\n\n");
        }
        
    }while(((a<=0)||(a>24))||((b>59)||(b<0)));
    if(c<=60){
        printf("E Nessesario Pagar R$ 1,00\n");
        d=c+b;
        e=d%60;
        f=d/60;
        i=f+a;
        if(i>24){
            j=i-24;
            printf("A Hora de Saida e de: %d %d ",j,e);
        }
        else{
            printf("A Hora de Saida e de: %d %d ",i,e);            
        }
    }
    if((c>60)&&(c<=120)){
        printf("E Nessesario Pagar R$ 2,00\n");
        d=c+b;
        e=d%60;
        f=d/60;
        i=f+a;
        if(i>24){
            j=i-24;
            printf("A Hora de Saida e de: %d %d ",j,e);
        }
        else{
            printf("A Hora de Saida e de: %d %d ",i,e);            
        }
    }
    if((c>120)&&(c<=180)){
        printf("E Nessesario Pagar R$ 4,20\n");
        d=c+b;
        e=d%60;
        f=d/60;
        i=f+a;
        if(i>24){
            j=i-24;
            printf("A Hora de Saida e de: %d %d ",j,e);
        }
        else{
            printf("A Hora de Saida e de: %d %d ",i,e);            
        }
    }
    if((c>180)&&(c<=240)){
        printf("E Nessesario Pagar R$ 5,60\n");
        d=c+b;
        e=d%60;
        f=d/60;
        i=f+a;
                if(i>24){
            j=i-24;
            printf("A Hora de Saida e de: %d %d ",j,e);
        }
        else{
            printf("A Hora de Saida e de: %d %d ",i,e);            
        }
    }
    if(c>240){
        d=c+b;
        e=d%60;
        f=d/60;
        i=f+a;
        if(i>24){
            j=i-24;
            printf("A Hora de Saida e de: %d %d ",j,e);
        }
        else{
            printf("A Hora de Saida e de: %d %d ",i,e);            
        }
        while (c%60==0)
        {
            ++c;
        }
        g=c/60;
        h=g*2;
        printf("E Nessesario Pagar R$ %d,00 ",h);

    }
    return 0;
}   