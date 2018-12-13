//Estrutura em C

#include<stdio.h>
int main(){

struct horario{

int horas;
int minutos;
int segundos;




};
struct horario agora;

agora.horas=15;
agora.minutos=50;
agora.segundos=45;



printf("%i:%i:%i",agora.horas,agora.minutos,agora.segundos);





return 0;
}
