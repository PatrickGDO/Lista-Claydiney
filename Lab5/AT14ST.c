#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    char str1[20],str2[20],str3[20];
    int N,b,i;
    printf("digite uma string : ");
    scanf(" %s",str1);
    printf("Digite outra String : ");
    scanf(" %s",str2);
    b=strlen(str2);
    do{
        printf("Digite quantos caracteres quer Concatenar da string 2 para 1 : ");
        scanf("%d",&N);
        if(N<0){
            printf("Somente Numeros Negativos !!\n\n");
        }
        if(N>b){
            printf("Numero Maior que a string!!\n\n");
        }
    }while(N<0||N>b);
    for(i=0;i<N;i++){
        str3[i]=str2[i];
    }
    str3[i]='\0';
    strcat(str1,str3);
    printf("%s",str1);
    return 0;
}