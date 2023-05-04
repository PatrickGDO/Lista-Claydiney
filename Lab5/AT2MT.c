#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[5][5],i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i==j){
                a[i][j]=1;
                printf("%d",a[i][j]);
            }
            else{
                a[i][j]=0;
                printf("%d",a[i][j]);
            }
            if(j==4){
                printf("\n");
            }
        }
    }
    return 0;
}