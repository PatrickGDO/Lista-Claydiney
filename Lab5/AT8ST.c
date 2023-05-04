#include <stdio.h>
#include <stdlib.h>

int main(){
    char A,B,str[20],str1[20];
    int i;
    printf("Digite uma String : ");
    scanf("%s",str);
    printf("Digite uma Letra que tem na String : ");
    scanf(" %c",&A);
    printf("Digite A Letra que deseja Substituir a Anterior : ");
    scanf(" %c",&B);
    for(i=0;str[i]!='\0';i++){
        str1[i]=str[i];
        if(str1[i]==A){
            str1[i]=B;
        }
    }
    str1[i]='\0';
    printf("As String com as Letras Trocadas fica : %s ",str1);
    return 0;
}