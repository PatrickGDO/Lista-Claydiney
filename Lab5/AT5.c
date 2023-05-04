#include <stdio.h>
#include <stdlib.h>

int main(){
    float a[50];
    int i;
    for(i=0;i<50;i++){
        a[i]=(i+5*i)%(i+1);
        printf("%f\n",a[i]);
    }
    return 0;
}