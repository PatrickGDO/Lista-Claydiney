#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a=0;
    while(a<100000){
        a=a+1000;
        printf("%d\n",a);
    }
    return 0;
}