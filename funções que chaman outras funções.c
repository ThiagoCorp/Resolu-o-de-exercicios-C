

#include <stdio.h>


int main ()
{
float somaDeDigitos(float num1, float num2) ;//Declarando a função
float a,b,soma;



printf("Digite 2 numeros: ");
scanf("%f",&a);
scanf("%f",&b);
soma = somaDeDigitos(a, b);

printf("A Soma é: ",soma);

return 0 ; 
} 
 
float somaDeDigitos(float num1, float num2) //Contrução da função  
{
//float x; 

 float valorAbsoluto (float x);//declaração da funçao
 
 
 float valorAbsoluto (float x);//Contrução da função

 if (num1 < 0) {
  num1 = valorAbsoluto(num1);
 }
 if (num2 < 0) {
 
  num2 = valorAbsoluto(num2);
 }
 

 return num1 + num2;
  
 float valorAbsoluto (float x){
  
 
 return x * -1;
 
 }﻿