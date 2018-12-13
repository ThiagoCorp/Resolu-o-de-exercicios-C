
//*******************************************************
//Instituto Federal de são Paulo - Campus Sertãozinho
//Disciplina.....:M2LPBA
//Programação de Computadores e Dispositivos Móveis
//Aluno..........:Thiago Costa do Carmo
//********************************************************




#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

//Declaração de Variaveis


	int numeros, cont, somatorio=0, multiplicacao=1;

//Loop for para receber os valores digitados pelo usuario
	for (cont=0; cont<5; cont++){
		printf ("Digite um numero [%d]:", cont);
		scanf ("%d", &numeros,cont);

	}




//Somando os valores do vetor
	for (cont=0; cont<5; cont++){
		somatorio=somatorio+numeros,cont;
		multiplicacao=multiplicacao*numeros,cont;

	}

//Imprenssao da soma
	printf("O Valor da Soma eh =%d\n",somatorio);



	if ( numeros >=0)
	{

		printf("O Valor da Soma eh Positivo \n");

	}else   {

		printf("O Valor da Soma eh Negativo \n");
	}




//Impressao da multiplicacao
	printf("O valor da Multiplicacao = %d\n",multiplicacao);

//Processamento e Saida com a clausula if e else

	if ( numeros >=0)
	{

		printf("O Valor da Multiplicacao eh Positivo \n");

	}else  {

		printf("O Valor da Multiplicacao eh Negativo \n");
	}






     return 0;
}
