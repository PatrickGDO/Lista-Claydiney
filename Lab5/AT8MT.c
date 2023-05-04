#include <stdio.h>
#include <stdlib.h>

int main(){
    float A[2][2],B[2][2],C[2][2],cont;
    int i,j,c;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("\nDigite um numero : ");
            scanf(" %f",&A[i][j]);

            printf("\nDigite um numero para a outra Matriz : ");
            scanf(" %f",&B[i][j]);
        }
    }
        printf("1- Somar As Duas Matrizes\n");
        printf("2- Subtrair a Primeira Matriz da Segunda\n");
        printf("3- adicionar uma constante as duas Matrizes\n");
        printf("4- Imprimir as Matrizes\n\n");
        printf("Escolha uma Opcao : ");
        scanf("%d",&c);
    switch(c){
        case 1:
            printf("A Soma Das Matrizes eh : \n");
            for(i=0;i<2;i++){
                for(j=0;j<2;j++){
                    C[i][j]=A[i][j]+B[i][j];
                    printf("[%-2f] ",C[i][j]);
                    if(j==1){
                        printf("\n");
                    }
                }
            }
            break;
        case 2:
            printf("A Subtracao da Primeira Matriz pela Segunda eh : \n");
            for(i=0;i<2;i++){
                for(j=0;j<2;j++){
                    C[i][j]=A[i][j]-B[i][j];
                    printf("[%-2f] ",C[i][j]);
                    if(j==1){
                        printf("\n");
                    }
                }
            }
            break;
        case 3:
            printf("Digite a Constante que deseja adicionar : \n");
            scanf("%f",&cont);
            for(i=0;i<2;i++){
                for(j=0;j<2;j++){
                    A[i][j]= A[i][j]+cont;
                    B[i][j]= B[i][j]+cont;
                }
            }
            for(i=0;i<2;i++){
                for(j=0;j<2;j++){
                    printf("[%-2f] ",A[i][j]);
                    if(j==1){
                        printf("\n");
                    }
                }
            }
            printf("\n");
            for(i=0;i<2;i++){
                for(j=0;j<2;j++){
                    printf("[%-2f] ",B[i][j]);
                    if(j==1){
                        printf("\n");
                    }
                }
            }
            break;
        case 4:
            printf("As imprecoes das Matrizes : \n");
            for(i=0;i<2;i++){
                for(j=0;j<2;j++){
                    printf("[%-2f] ",A[i][j]);
                    if(j==1){
                        printf("\n");
                    }
                }   
            }
            printf("\n");
            for(i=0;i<2;i++){
                for(j=0;j<2;j++){
                    printf("[%-2f] ",B[i][j]);
                    if(j==1){
                        printf("\n");
                    }
                }
            }
            break;
        default:   
            printf("Escolha invalida!!");
            
    }
    return 0;
}