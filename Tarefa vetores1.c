//Ocorrência de um nunero usando vetores
#include<stdio.h>
int main(){

int numeros[8];
int cont;
int ocorrencia=0;
int valor;
printf("Digite um valor:");
scanf("%d",&valor);
for(cont=0;cont<8;cont++){
printf("Digite o array[%d]:",cont);
scanf("%d",&numeros[cont]);





}
//Algoritmo para o contador

for(cont=0;cont<8;cont++){
if(numeros[cont] == valor)
ocorrencia ++;


}



printf("Existem %d ocorencias",ocorrencia);


return 0;

}
