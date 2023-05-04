#include <stdio.h>
#include <stdlib.h>

int main(){
    char S[20],s[20];
    int i,j,a,b;
    printf("Digite a String : ");
    fgets(S,20,stdin);
    do{
        printf("Digite um numero inteiro positivo menor que 20 : ");
        scanf(" %d",&i);
        printf("Digite um numero inteiro positivo menor que 20 : ");
        scanf(" %d",&j);
        if(i<0||j<0){
            printf("Numero invalido!!\n\n");
        }
    }while(i<0||j<0||i>20||j>20);
    if(j>i){
        b=j-i;
        for(a=0;a<b;a++,i++){
            if(S[i]=='\0'){
                printf("ha lixo no Espacamento entre os numeros citados !!");
                break;
            }
            else{
                s[a]=S[i];
            }
        }
        if(a!=0){
        s[a]=S[j];
        a++;
        s[a]='\0';
        printf("as letras entre o espacamento cidato eh : %s",s);
        }
        else{
            printf("Não ha letras no espacamento!!");
        }
    }
    else{
        b=i-j;
        for(a=0;a<b;a++,i++){
            if(S[i]=='\0'){
                printf("ha lixo no Espacamento entre os numeros citados");
                break;
            }
            else{
                s[a]=S[i];
            }
        }
        if(a!=0){
        s[a]=S[j];
        a++;
        s[a]='\0';
        printf("as letras entre o espacamento cidato eh : %s",s);
        }
        else{
            printf("Não ha letras no espacamento!!");
        }
    }
    return 0;
}