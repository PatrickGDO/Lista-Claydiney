#include <stdio.h>
#include <stdlib.h>

int main(){
    char A[20],A1[20];
    int i;
    printf("Digite uma palavra : ");
    scanf("%s",A);
    for(i=0;A[i]!='\0';i++){
        A1[i]=A[i];
        if(A1[i]>96&&A1[i]<122){
            A1[i]=A1[i]-32;
        }
    }
    A1[i]='\0';
    printf("A Palavra Convertida para Maiuscula fica : %s",A1);
    return 0;
}