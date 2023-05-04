#include <stdio.h>
#include <stdlib.h>

int main(){
    char vet[20],vet1[20],vetr[20];
    int i,j;
    printf("Digite uma Palavra com espaco : ");
    scanf("%s%s",vet,vet1);
    
    for(i=0,j=0;vet[i]!= '\0';i++,j++){
        vetr[j]=vet[i];
    }
    for(i=0;vet1[i]!='\0';i++,j++){
        vetr[j]=vet1[i];
    }
    vetr[j]='\0';
    printf("o Vetor resultante eh : %s ",vetr);
    return 0;
}