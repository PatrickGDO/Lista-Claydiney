#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[200],str1[200];
    int i,b,cont,d;
    printf("Digite uma String : ");
    fgets(str,200,stdin);
    for(i=0,b=0;str[i]!='\0';i++,b++){
        if(str[i]==32||str[i]==45){
            i++;
        }
        if(str[i]<91&&str[i]>64){
            str[i]=str[i]+32;
        }
        str1[b]=str[i];
    }
    d=b;
    b-=2;
    for(i=0,cont=0;str1[i]!='\0';i++,b--){
        if(str1[i]==str1[b]){
            cont++;
        }
    }
    if(cont==d-1){
        printf("Eh um Palindromo!!");
    }
    else{
        printf("Nao eh um palindromo!!");
    }
    return 0;
}