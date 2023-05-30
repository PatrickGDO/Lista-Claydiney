#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    char A[20],B[20],*p,*p1;
    int tamanho1,tamanho2,i,j,cont,c;
    p=A;
    p1=B;
    printf("Digite uma String : ");
    setbuf(stdin,NULL);
    fgets(p,20,stdin);
    printf("Digite uma String : ");
    setbuf(stdin,NULL);
    fgets(p1,20,stdin);
    tamanho1=strlen(p);
    tamanho2=strlen(p1);
    if(tamanho1>tamanho2){
        for(i=0;*(p+i)!='\0';i++){
            if(*(p+i)==*(p1+0)){
                c=i;
                for(cont=0,j=0;j<tamanho2;j++){
                    if(*(p+c)==*(p1+j)){
                        c++;
                        cont++;
                    }
                    else{
                        break;
                    }
                }
            }
            if(cont==tamanho2-1){
                break;
            }
        }
        if(cont==tamanho2-1){
            printf("A Segunda String esta contida na Primeira!!\n");
        }
        else{
            printf("A Segunda String nao esta contida na Primeira!!\n");
        }
    }
    else{
        printf("A Segunda String nao esta contida na Primeira!!\n");
    }
    return 0;
}