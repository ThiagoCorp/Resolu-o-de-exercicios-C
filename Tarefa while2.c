//Escreva um progama em C que efetue a leitura sucessiva de
//valores e apresente no final o maior e o menor;


#include<stdio.h>
int main(){

int numero;

int maior=-1000;
int menor=9999;
while(numero >=0){
printf("Digite um valor:");
scanf("%d",&numero);

if(numero >= 0)
maior=numero;
if(numero > 0)
maior=numero;
if(maior < numero)
maior=numero;
if(menor > numero)
menor=numero;




}


printf("O maior valor calculado foi:%d\n",maior);
printf("O menor valor calculado foi:%d\n",menor);






return 0;

}
