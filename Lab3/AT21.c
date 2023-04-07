#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b,c,d,e;
    printf("Digite o primeiro numero : ");
    scanf("%d",&a);
    printf("Digite o segundo numero : ");
    scanf("%d",&b);
    if((a>=0)&&(a<b)){
        for(c=a;c<b;c++){
            d=1;
            for(e=2;e<=c;e++){
                if(((c%e)==0)&&(e!=c)){
                    d=0;
                    break;
                }
            }
            if((c==1)||(c==0)){
                continue;
            }
            if(d==1){
                printf("%d\n",c);
            }
        }
    }
    else{
        printf("O Primeiro numero tem que ser menor que o segundo");
    }
    return 0;
}