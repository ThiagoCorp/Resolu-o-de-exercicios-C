//Programa em C que solicite um numero entre 1 e 4.
//Se o usuario digitar um numero diferente,o programa deve mostrar a mensagem
//entrada invalida  e solicitar o numero nivamente....


#include<stdio.h>
int main(){
int n=0;
do{

printf("Digite um numero de 1 a 4:");
scanf("%d",&n);
if(n<1  || (n>4))
printf("Entrada invalida!\n");
else
printf("O numero digitado %d\n",n);






}while(1==1);



return 0;


}
