#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a;
    printf("Digite um Numero : ");
    scanf("%d",&a);
    if(a % 5 == 0 ){
        printf("Numero Divisivel por 5!!");
    }
    if(a%3==0){
        printf("Numero Divisivel por 3!!");
    }
    return 0;
}