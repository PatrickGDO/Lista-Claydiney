#include <stdio.h>
#include <stdlib.h>

int main(){
    char string[20];
    int i,cont=0;
    printf("Digite uma string : ");
    gets(string);
    for(i=0;i<19;i++){
        if(string[i]=='1'){
            cont++;
        }
    }
    printf("O Numero de 1's eh: %d ",cont);
    return 0;
}