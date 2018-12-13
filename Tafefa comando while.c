// Escreva um programa em C que efetue a leituta sucessiva de
//valores numericos e apresente no final a media e a quantidade de valores
//e pare até que seja digitado um valor negativo;

#include<stdio.h>
int main(){

int cont=0;
float somatorio=0;
float numero;
float media;

while(numero > 0){
printf("Digite um valor:");
scanf("%f",&numero);
if(numero > 0){

somatorio=somatorio + numero;
cont ++;



}




}

media=(somatorio/cont);
printf("A quantidade de valores foi:%d\n",cont);
printf("O calculo do somatorio foi:%f\n",somatorio);
printf("A media calculadoa foi:%f\n",media);

return 0;

}
