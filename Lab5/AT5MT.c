#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a[10][10],i,j;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(i<j){
                a[i][j]= 2*i+7*j-2;
            }
            if(i==j){
                a[i][j]= 3*pow(i,2)-1;
            }
            if(i>j){
                a[i][j]= 4*pow(i,3)-5*pow(j,2)+1;
            }
        }
    }
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            printf("[%-5d] ",a[i][j]);
            if(j==9){
                printf("\n");
            }
        }
    }
    return 0;
}