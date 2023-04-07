#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b,produto,palindromo_maior=0,prod,digito=0,inverso,desc,fator1,fator2;

    for(a=999;a>=100;a--){
        for(b=a;b>=100;b--){
            produto = a * b;
            if(produto>palindromo_maior){
                prod = produto;
                while(prod!=0){
                    digito++;
                    prod = prod/10;
                }
                prod = produto;
                inverso = 0;
                while(prod!=0){
                    desc = prod % 10;
                    inverso = inverso + desc * pow(10,digito-1);
                    prod = prod/10;
                    digito--;
                }
                if(produto == inverso){
                    palindromo_maior = inverso;
                    fator1 = a;
                    fator2 = b;
                }
            }
        }
    }
    printf("O Maior Palindromo formado pela Multiplicacao de %d x %d eh: %d\n",fator1,fator2,palindromo_maior);
    return 0;
}