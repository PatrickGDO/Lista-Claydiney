#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a=10;
    while(a>-1){
        printf(" %d\n",a);
        if(a==0){
            printf("FIM!");
        }
        a--;
    }
    return 0;
}