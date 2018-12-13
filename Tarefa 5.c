//Somatorio de notas

#include<stdio.h>
int main(){

float somatorio;
float i;
float notas;
float media;

for(i=0;i<=10;i++){
printf("Digite as notas:%f",i);
scanf("%f",&notas);
somatorio=somatorio + notas;



}

media=somatorio/10;


printf("A media de todas as notas obtidas e %f",media);



return 0;
}
