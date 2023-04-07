#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a;
    for(a=1;a<=100;a++){
        printf("%d\n",a);
    }
    a=a-99;
    while(a<=100){
        printf("%d\n",a);
        a++;
    }
    a=a-99;
    do{
        printf("%d\n",a);
        a++;
    }while(a<=100);
    return 0;
}