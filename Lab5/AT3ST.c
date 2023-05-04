#include <stdio.h>
#include <stdlib.h>


int main(){
    char str[20],str1[20];
    int i,j,cont;
    printf("Digite uma palavra : ");
    scanf("%s",str);
    for(i=0,cont=-1;str[i]!='\0';i++){
        cont++;
    }
    for(i=cont,j=0;i>=0;i--,j++){
        str1[j]=str[i];
    }
    str1[j]='\0';
    printf("A Palavra invertida fica : %s ",str1);
    return 0;
}