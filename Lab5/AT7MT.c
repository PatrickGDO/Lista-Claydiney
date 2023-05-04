#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    int Mat[5][5],i,j,k,c,cont;
    srand(time (NULL));

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            Mat[i][j]=rand()%99;
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            for(k=0,cont=0;k<5;k++){
                for(c=0;c<5;c++){
                    if(Mat[i][j]==Mat[k][c]){
                        cont++;
                    }
                    if(cont>1){
                        Mat[k][c]=rand()%99;
                        cont --;
                        c--;
                    }
                }
            }
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("[%-2d]",Mat[i][j]);
            if(j==4){
                printf("\n");
            }
        }
    }
    return 0;
}