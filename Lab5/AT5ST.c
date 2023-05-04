#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[20],str1[20];
    int i;
    printf("Digite uma Palavra :  ");
    gets(str);
    for(i=0;str[i]!='\0';i++){
        str1[i]=str[i];
        if(str[i]<91 && str[i]>64){
            str1[i]=str[i]+32;
        }
    }
    str1[i]='\0';
    printf("A Palavras somente me Minusculo fica : %s",str1);
    return 0;
}