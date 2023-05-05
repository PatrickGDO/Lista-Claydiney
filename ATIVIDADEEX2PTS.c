#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char Pessoa[200],Cebola[200],Cebolinha[200];
    int i,c,b;
    printf("Digite uma palavra : ");
    fgets(Pessoa,200,stdin);
    for(i=0;Pessoa[i]!='\0';i++){
        Cebola[i]=Pessoa[i];
        if(Cebola[i]=='r'||Cebola[i]=='R'){
            Cebola[i]=Cebola[i]-6;
        }
        if(Cebola[i]==32 || Cebola[i]==','||Cebola[i]=='.'||Cebola[i]=='?'||Cebola[i]=='!'||Cebola[i]=='"'){
            if(Cebola[i-1]=='l'||Cebola[i-1]=='L'){
                Cebola[i-1]=Cebola[i-1]+6;
            }
        }
    }
    if(Cebola[i-2]=='l'||Cebola[i-2]=='L'){
        Cebola[i-2]=Cebola[i-2]+6;
    }
    Cebola[i]='\0';
    b = strlen(Cebola); 
    for(i=0,c=0;i<b;i++,c++){
        Cebolinha[c]=Cebola[i];
        if(Cebola[i]==Cebola[i+1]){
            i++;
        }
    }

    
    printf("%s",Cebolinha);
    return 0;
    }
