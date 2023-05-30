#include <stdio.h>
#include <stdlib.h>

int main(){
    float a[10],*p;
    int i;
    p=a;
    for(i=0;i<10;i++){
        printf("%p",p+i);
        printf("\n");
    }
    return 0;

}