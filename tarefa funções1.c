#include<stdio.h>

float areatriangulo(float x,float y){
float result;
result=(x*y)/2;

return 0;




}

int main(){
float base,altura,area;
printf("Digite a base e a altura do triangulo:");
scanf("%f",&base);
scanf("%f",&altura);
area=areatriangulo(base,altura);
printf("A area vale:%f",area);
return 0;


}
