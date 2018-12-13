#include <stdio.h>
#include <stdlib.h>


int main(void)
{

	int mult=1,i,vetor[5], soma=0; // declarando mult para multiplicação, i para uma estrutura de repetição, vetor de tamanho 5 e soma recebendo 0.

	
	for(i=0;i<5;i++) // responsavel por armazenar os dados obtidos pelo usuario no vetor de tamanho 5
	{
		printf("Ola , informe um valor: ");
		scanf("%d",&vetor[i]); // i de 0 a 4.
	}

	for (i=0;i<5;i++) // for responsavel por percorrer o vetor de tamanho 5
	{
		soma = soma + vetor[i]; // somando cada valor do vetor e armazenando na variavel soma.
	}

	printf("O valor da soma e %d.\n", soma ); //Mostrando o valor da soma.
	
	if (soma > 0) // se a soma for maior que zero (positivo) vai printar \/ isso
	{ 
		printf("O valor da soma deu Positivo.\n");
	}

	else // não precisa usar else if pois se a soma nao é negativa ele deve ser COM CERTEZA positiva (logica binaria)
	{
		printf("O valor da soma deu Negativo.\n");
	}

	for(i=0;i<5;i++) // for responsavel por percorrer o vetor de tamanho 5.
	{
		mult = mult*vetor[i]; // multiplicando cada valor do vetor e armazenando na variavel mult.
		// OBS: Não esquecer de inicializar a variavel mult com 1 (mult=1), pois o elemento neutro da mult é o 1.
		// e da adição = 0.
	}

	printf("O valor da mult e %d.\n", mult); //Mostrando o valor da mult.

	if(mult > 0) // se a mult for maior que zero (positiva) vai printar \/ isso
	{
		printf("O valor da mult deu positivo.\n");
	}

	else // não precisa usar else if pois se a mult não deu positiva COM CERTEZA ela é negativa (ou um ou outro).
	{
		printf("O valor da mult deu negativo.\n");
	}

	return 0; // retornando para o sistema 0.
}