#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[20],str1[20];
    int i;
    printf("Digite uma palavra para ser codificada : ");
    fgets(str,20,stdin);
    for(i=0;str[i]!='\0';i++){
        if(str[i]==32){
            i++;
        }
        str1[i] = str[i]+3;
    }
    str1[i]='\0';
    printf("A Palavra codificada eh: %s\n",str1);
    return 0;
}