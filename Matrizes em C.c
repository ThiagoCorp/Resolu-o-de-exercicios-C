//Matrizes são vetores bidimensionais
//Matriz 3 x 2

#include<stdio.h>
int main(){

int m [3][2];
int conty,contz;
for(conty=0;conty<3;conty++){
for(contz=0;contz<2;contz++){
printf("m[%d][%d]:",conty,contz);
scanf("%d",&m[conty][contz]);


}



}
printf("\n\nSaida das matrizes:\n");
printf("");
for(conty=0;conty<3;conty++){
for(contz=0;contz<2;contz++){
printf("m[%d][%d]:%d\n",conty,contz,m[conty][contz]);


}



}



return 0;

}
