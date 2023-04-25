#include <stdio.h>
#include <stdlib.h>

void Media_Nota(float A,float B,float C,char E);

int main(){
    float a,b,c;
    char e;
    printf("Digite a Nota de um Aluno : ");
    scanf(" %f",&a);
    printf("Digite a Nota de um Aluno : ");
    scanf(" %f",&b);
    printf("Digite a Nota de um Aluno : ");
    scanf(" %f",&c);
    printf("Digite uma Letra P para Saber a Media ponderada ou A para saber a Media Aritimetica : ");
    scanf(" %c",&e);
    Media_Nota(a,b,c,e);
    return 0;
}

void Media_Nota(float A,float B,float C,char E){
    float Media;
    switch(E){
        case 'a':
        case 'A':
            Media = (A+B+C)/3.0;
            printf("A Media Aritimetica eh: %f ",Media); break; 
        case 'p':
        case 'P':
            Media = (5.0*A+3.0*B+2.0*C)/10.0;
            printf("A Media Ponderada eh: %f ",Media);break;
        default :
            printf("Letra Invalida!!");
    }
}