#include <stdlib.h>
#include <stdio.h>

int main(){
    float A[3][3],*p;
    int i;
    p=&A[0][0];
    for(i=0;i<9;i++){
        printf("%p",p+i);
        printf("\n");
    }
    return 0;
}