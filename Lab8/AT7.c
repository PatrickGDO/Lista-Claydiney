#include <stdlib.h>
#include <stdio.h>

int main(){
    int A[3],*p1[3],i;
    p1[0]=&A[0];
    p1[1]=&A[1];
    p1[2]=&A[2];
    for(i=0;i<3;i++){
        printf("Digite um Numero Inteiro : ");
        scanf("%d",p1[i]);
    }
    for(i=0;i<1;i++){
        if(*p1[i]>*p1[i+1]){
            if(*p1[i]>*p1[i+2]){
                if(*p1[i+2]>*p1[i+1]){
                    printf("esta localizado no enderco : %p e o Numero eh: %d\n",p1[i+1],*p1[i+1]);
                    printf("esta localizado no enderco : %p e o Numero eh: %d\n",p1[i+2],*p1[i+2]);
                    printf("esta localizado no enderco : %p e o Numero eh: %d\n",p1[i],*p1[i]);
                }
                else{
                    printf("esta localizado no enderco : %p e o Numero eh: %d\n",p1[i+2],*p1[i+2]);
                    printf("esta localizado no enderco : %p e o Numero eh: %d\n",p1[i+1],*p1[i+1]);
                    printf("esta localizado no enderco : %p e o Numero eh: %d\n",p1[i],*p1[i]);
                }
            }
            else{
                printf("esta localizado no enderco : %p e o Numero eh: %d\n",p1[i+1],*p1[i+1]);
                printf("esta localizado no enderco : %p e o Numero eh: %d\n",p1[i],*p1[i]);
                printf("esta localizado no enderco : %p e o Numero eh: %d\n",p1[i+2],*p1[i+2]);
            }
        }
        else{
            if(*p1[i+1]>*p1[i+2]){
                if(*p1[i+2]>*p1[i]){
                    printf("esta localizado no enderco : %p e o Numero eh: %d\n",p1[i],*p1[i]);
                    printf("esta localizado no enderco : %p e o Numero eh: %d\n",p1[i+2],*p1[i+2]);
                    printf("esta localizado no enderco : %p e o Numero eh: %d\n",p1[i+1],*p1[i+1]);
                }
                else{
                    printf("esta localizado no enderco : %p e o Numero eh: %d\n",p1[i+2],*p1[i+2]);
                    printf("esta localizado no enderco : %p e o Numero eh: %d\n",p1[i],*p1[i]);
                    printf("esta localizado no enderco : %p e o Numero eh: %d\n",p1[i+1],*p1[i+1]);
                }
            }
            else{
                printf("esta localizado no enderco : %p e o Numero eh: %d\n",p1[i],*p1[i]);
                printf("esta localizado no enderco : %p e o Numero eh: %d\n",p1[i+1],*p1[i+1]);
                printf("esta localizado no enderco : %p e o Numero eh: %d\n",p1[i+2],*p1[i+2]);
            }
        }
    }
    return 0;
}