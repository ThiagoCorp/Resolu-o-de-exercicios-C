#include<stdio.h>
int main(void){
 teste();
 teste();
 teste();

return 0;




}
//Chamando a função
voidteste(void){

int variavellocalautonatica=2;
variavellocalautomatica *=2;
static int variavellocalestatica=2;
variavellocalestatica*=2;
printf("Local automatica=%i\n",variavellocalautomatica);
printf("Local estatica=%i\n",variavellocalestatica);



}
