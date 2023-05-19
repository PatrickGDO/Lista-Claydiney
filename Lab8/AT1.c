#include <stdlib.h>
#include <stdio.h>

int main(){
int x=10,y=20;
int *p1,*p2;
p1=&x;
p2=&y;
p1+=1;
printf("%d\n",x);
printf("%d\n",y);
printf("%p\n",&x);
printf("%p\n",&y);
printf("%p\n",p1);
printf("%p\n",p2);
printf("%d\n",*p1+*p2);
printf("%d\n",*(&x));
printf("%p\n",&(*p2));
return 0;
}