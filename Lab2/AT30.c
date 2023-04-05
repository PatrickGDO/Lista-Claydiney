#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a,b,c;
    printf("Digite 1 numero : ");
    scanf("%f",&a);
    printf("Digite 1 numero : ");
    scanf("%f",&b);
    printf("Digite 1 numero : ");
    scanf("%f",&c);
    if((a>=b)&&(a>=c)&&(b>=c))
        printf("A Ordem Crescente e: %f,%f,%f",c,b,a);
    if((a>=b)&&(a>=c)&&(c>=b))
        printf("A Ordem Crescente e: %f,%f,%f",b,c,a);
    if((b>=b)&&(b>=c)&&(a>=c))
        printf("A Ordem Crescente e: %f,%f,%f",c,a,b);
    if((b>=b)&&(b>=c)&&(c>=a))
        printf("A Ordem Crescente e: %f,%f,%f",a,c,b);
    if((c>=b)&&(c>=a)&&(a>=b))
        printf("A Ordem Crescente e: %f,%f,%f",b,a,c);
    if((c>=b)&&(c>=a)&&(b>=a))
        printf("A Ordem Crescente e: %f,%f,%f",a,b,c);
    return 0;
}