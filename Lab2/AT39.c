#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a,b,c,h;
    printf("Digite seu Salario Atual : ");
    scanf("%f",&a);
    printf("Digite em Anos, quanto e seu tempo de Trabalho (EX: 1.5 = uma ano e Meio)\n(caso tenha menos de um ano coloque o numero como 0) : ");
    scanf("%f",&b);
    if(a<=500.0){
        c=a*0.25;
        h=a+c;
        printf("Salario Reajustado e: R$%.2f\n",h);
    }
    if((a>500.0)&&(a<=1000.0)){
        c=a*0.20;
        h=a+c;
        printf("Salario Reajustado e: R$%.2f\n",h);
    }
    if((a>1000.0)&&(a<=1500.0)){
        c=a*0.15;
        h=a+c;
        printf("Salario Reajustado e: R$%.2f\n",h);
    }
    if((a>1500.0)&&(a<=2000)){
        c=a*0.10;
        h=a+c;
        printf("Salario Reajustado e: R$%.2f\n",h);
    }
    if(a>2000.0){
        printf("Sem Reajuste Salarial\n");
        h=a;
        printf("Salario Reajustado e: R$%.2f\n",h);
    }
    if(b<1.0){
        printf("Sem Bonus!!\n");
        printf("Seu Salario Fica : R$%.2f",h);
    }
    if((b>=1.0)&&(b<=3.0)){
        printf("Seu Bonus e de R$100,00!!\n");
        printf("Seu Salario Fica : R$%.2f",h+100.0);
    }
    if((b>=4.0)&&(b<=6.0)){
        printf("Seu Bonus e de R$200,00!!\n");
        printf("Seu Salario Fica : R$%.2f",h+200.0);
    }
    if((b>=7.0)&&(b<=10.0)){
        printf("Seu Bonus e de R$300,00!!\n");
        printf("Seu Salario Fica : R$%.2f",h+300.0);
    }
    if(b>10.0){
        printf("Seu Bonus e de R$500,00!!\n");
        printf("Seu Salario Fica : R$%.2f",h+500.0);
    }
}