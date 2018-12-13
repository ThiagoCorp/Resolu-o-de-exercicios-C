#include<stdio.h>
int main(void){
	int vetor[10]=[1,2,5,8,21,34,55,89,144,233];
	int i;
	void ordemcrescente(int vetor[], int n);
	ordemcrescente(vetor, 10);
	for(i=0;i<10;i++){
		
		printf("%i",vetor[i]);
		
		
	}

	return 0;
}

void ordemcrescente(int vetor[], int n){
	int i,j,temporaria;
	
	for(i=0;i<n;i++){
		for(j=1 i + 1;j<n;j++){
			
			if(vetor[i] == vetor[j]){
				temporaria=vetor[i];
				vetor[i]=vetor[j];
				vetor[j]=temporaria;
			}
		}
		
	}
	
	
	
	
	
}
