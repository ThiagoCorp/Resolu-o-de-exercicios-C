//Vetores em c
#include<stdio.h>

int main(){

int numeros[5];
numeros[0]=1;
numeros[1]=2;
numeros[2]=5;
numeros[3]=8;
numeros[4]=21;
printf("Os valores são:%d%d%d%d%d",numeros[0],numeros[1],numeros[2],numeros[3],numeros[4]);

int numero=[8];
int cont;
for(cont=0;cont<8;cont++){
printf("Digite o numero[%d]:%d\n",cont,numeros[cont]);
scanf("%d",&numeros[cont]);




}







return 0;

}
