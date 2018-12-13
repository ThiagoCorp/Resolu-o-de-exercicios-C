//Escreva um programa em C que leia duas matrizes 2x2
//de inteiros e armazene a soma dessas duas matrizes em
//uma terceira matriz 2x2.No final,o programa deve exibir a matriz
//resultante.
#include<stdio.h>
int main(){
int a[2][2],b[2][2],c[2][2];
int conty,contz;
for(conty=0;conty<2;conty++){
for(contz=0;contz<2;contz++){
printf("a[%d][%d]:",conty,contz);
scanf("%d",&a[conty][contz]);



}




}

for(conty=0;conty<2;conty++){
for(contz=0;contz<2;contz++){
printf("b[%d][%d]:",conty,contz);
scanf("%d",&b[conty][contz]);




}




}
printf("\n\nSaida da matriz:\n");
printf("");

for(conty=0;conty<2;conty++){
for(contz=0;contz<2;contz++){
c[conty][contz]=a[conty][contz] + b[conty][contz];
printf("c[%d][%d]:%d\n",conty,contz,c[conty][contz]);



}




}






return 0;

}
