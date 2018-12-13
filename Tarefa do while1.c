//Programa que calcule o Somatorio,a media e a quantidade de um numero
//ate que o usuario digite um valor negativo


#include<stdio.h>
int main(){
int n=0;
float somatorio=0;
float media;
int cont=0;

do{

printf("Digite um numero:");
scanf("%d",&n);
if(n>0){


somatorio=somatorio +n;
cont ++;


}







}while(n>0);
printf("Somatorio:\n%f",somatorio);
printf("\nValoreslidos:\n%d",cont);
media=somatorio/cont;
printf("\nMedia:\n%f",media);












return 0;

}


