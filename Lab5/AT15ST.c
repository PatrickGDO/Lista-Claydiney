#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char a,str[21],str1[21],reverstr[21],letra,c1,c2;
    int i,tam=-1,tam1,rev,ori,quant;
    for(i=0;i<1;i++){
        printf("\nA-Ler uma string S1\nB-Imprimir o tamanho da String\nComparar a String S1 Com uma Nova String S2 fornecida pelo usuario e imprimir o resultado da comparacao\nD-Concatenar a String S1 com uma nova String S2 e imprimir na Tela o resultado da concatenacao\nE-Imprimir a String S1 de forma reversa\nF-Contar quantas vezes um dado caractere aparece na string S1. Esse caractere deve ser irformado pelo usuario\nG-Substituir a primeira ocorrencia do caractere C1 da string S1 pelo Caractere C2. Os caracteres C1 e C2 serao lidos pelo usuario\nH-Verifique se uma string S2 eh substring de S1. A string S2 deve ser informada pelo usuario\nI-Retornar uma substring da string S1.Para isso o usuario deve informar a partir de qual posicao deve ser criada a substring e qual eh o tamanho da substring\nJ-Fechar o Programa.");
        printf("\nEscolha uma opcao : ");
        scanf(" %c",&a);
        if(a=='A'||a=='a'||a=='b'||a=='B'||a=='c'||a=='C'||a=='d'||a=='D'||a=='E'||a=='e'||a=='f'||a=='F'||a=='g'||a=='G'||a=='h'||a=='H'||a=='i'||a=='I'||a=='J'||a=='j'){
            if(a=='A'||a=='a'){
                printf("Digite uma string de 20 caracteres : ");
                scanf(" %s",str);
                i--;
            }
            if(a=='B'||a=='b'){
                tam = strlen(str);
                printf("O Tamanho da string eh %d",tam);
                i--;
            }
            if(a=='C'||a=='c'){
                printf("Digite outra string : ");
                scanf(" %s",str1);
                if(strcmp(str,str1)==0){
                    printf("Strings iguais !!\n");
                    i--;
                }
                else{
                    printf("String Diferentes !!\n");
                    i--;
                }
            }
            if(a=='D'||a=='d'){
                strcat(str,str1);
                printf("O Resultado eh %s\n",str);
                i--;
            }
            if(a=='E'||a=='e'){
                for(rev=0,ori=tam;rev<tam;rev++,ori--){
                    reverstr[rev]=str[ori];
                }
                reverstr[rev]='\0';
                printf("A string 1 reversa fica : %s\n",reverstr);
                i--;
            }
            if(a=='F'||a=='f'){
                printf("Digite qual caractere voce quer saber a quantidade na sua string : ");
                scanf(" %c",&letra);
                for(ori=0,quant=0;ori<tam;ori++){
                    if(str[ori]==letra){
                        quant++;
                    }
                }
                printf("A quantidade eh : %d\n",quant);
                i--;
            }
            if(a=='G'||a=='g'){
                printf("Digite um caractere que deseja substituir na string : ");
                scanf(" %c",&c1);
                printf("Digite qual caractere deseja colocar : ");
                scanf(" %c",&c2);
                if(tam<0){
                    printf("Utilize a Opscao B primeiro !!");
                    i--;
                }
                else{
                    for(ori=0;ori<tam;ori++){
                        if(str[ori]==c1){
                            str[ori]=c2;
                        }
                    }
                    printf("A String Fica : %s \n",str);
                    i--;
                }
            }
            if(a=='H'||a=='h'){
                printf("Digite uma string para saber se ela eh uma substring da primeira string : ");
                scanf(" %s",str1);
                tam1 = strlen(str1);
                if(tam<0){
                    printf("Utilize a Opscao B primeiro !!");
                    i--;
                }
                else if(tam1>tam){
                    printf("Nao e uma Substring!!");
                    i--;
                }
                else{
                    for(ori=0,quant=0;ori<tam;ori++){
                        if(str[ori]==str1[ori]){
                            quant++;
                        }
                    }
                    if(quant>=3){
                        printf("E uma Substring da String!!");
                        i--;
                    }
                    else{
                        printf("Nao e uma Substring!!");
                        i--;
                    }
                }
            }
            if(a=='I'||a=='i'){
                printf("apartir de qual posicao quer fazer a substring: ");
                scanf(" %s",&c1);
                printf("E quantas letras quer : ");
                scanf(" %s",&c2);
                if(tam<0){
                    printf("Utilize a Opscao B primeiro !!");
                    i--;
                }
                else{
                    if(tam<c2){
                        printf("Letras ultrapassa a Quantidade de lestras da string !!");
                        i--;
                    }
                    else{
                        if(c2<0){
                            printf("Somente numeros positivos !!");
                            i--;
                        }
                        else{
                            for(ori=0;ori<c2;ori++){
                                str1[ori]=str[ori];
                            }
                            str1[ori]='\0';
                            printf("A substring fica : %s",str1);
                        }
                    }
                }
            }
            if(a=='J'||a=='j'){
                i++;
            }

        }
        else{
            i--;
            printf("\nCaractere Invalido!!\n");
        }
    }
    return 0;
}