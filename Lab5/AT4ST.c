#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[20],str1[20],let;
    int i,contvog;
    printf("Digite uma palavra : ");
    scanf("%s",str);
    printf("Digite um Caractere para substituir as vogais :  ");
    scanf(" %c",&let);
    for(i=0,contvog=0;str[i]!='\0';i++){
        str1[i]=str[i];
        if(str[i] == 'A'||str[i]=='a'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u' ){
            contvog++;
            str1[i]=let;
        }
    }
    str1[i]='\0';
    printf("A Quantidade de Vogal eh : %d \n",contvog);
    printf("A Substituicao fica : %s ",str1);
    return 0;
}