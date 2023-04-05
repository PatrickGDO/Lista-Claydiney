#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b,c,d,e;
    float f;
    printf("Digite um numero positivo para x : ");
    scanf("%d",&a);
    printf("Digite um numero positivo para y : ");
    scanf("%d",&b);
    printf("Digite um numero positivo para z : ");
    scanf("%d",&c);
    if((a>0)&&(b>0)&&(c>0)){
        printf("Digite um valor numerico para a efetuacao da media \n1-Geometrica\n2-Ponderada\n3-Harmonica\n4-Aritmetica\n : ");
        scanf("%d",&d);
        switch(d){
            case 1: 
                e=a*b*c;
                f=pow(e,1.0/3.0);
                printf("A Media Geometrica e: %f",f);break;
            case 2:
                f=((1*a)+(2*b)+(3*c))/6;
                printf("A Media Ponderada e: %f",f);break;
            case 3:
                f=1.0/((1.0/a)+(1.0/b)+(1.0/c));
                printf("A Media Harmonica e: %f",f);break;
            case 4:
                f=(a+b+c)/3;
                printf("A Media Aritimetica e: %f",f);break;
            default: 
                printf("Escolha Invalida!!");break;
        }

    }
    else{
        printf("Numeros Invalidos!!");
    }
    return 0;
}