#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o;
    do{
    printf("Digite quanto de Dinheiro deseja Sacar : ");
    scanf("%d",&a);       
    }while(a<0);

    b=a/100;
    c=a%100;
    d=c/50;
    e=c%50;
    f=e/20;
    g=e%20;
    h=g/10;
    i=g%10;
    j=i/5;
    k=i%5;
    l=k/2;
    m=k%2;
    n=m/1;
    o=m%1;
    
    printf(" Sao %d Notas de R$100\n",b);
    printf(" Sao %d Notas de R$50\n",d);
    printf(" Sao %d Notas de R$20\n",f);
    printf(" Sao %d Notas de R$10\n",h);
    printf(" Sao %d Notas de R$5\n",j);
    printf(" Sao %d Notas de R$2\n",l);
    printf(" Sao %d Notas de R$1\n",n);
    return 0;
}