
//Instituto Federal de São Paulo - Campus Sertãozinho
//Disciplina: M2LPBA
//Programação de Computadores e Dispositivos Móveis
//Aluno.....: Thiago Costa do Carmo



#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {

    //declaração de variaveis
    int numeros[5], cont, somatorio=0, multiplicacao=1;

    //loop para receber os valores digitados pelo usuario
    for (cont=0; cont<5; cont++){
        printf ("Digite um numero [%d]: ", cont);
        scanf ("%d", &numeros[cont]);




}

    //Somando os valores do vetor
    for (cont=0;cont<5;cont++) {




    somatorio = somatorio + numeros[cont];
    multiplicacao = multiplicacao * numeros[cont];
    }


    //imprimindo a soma e o produto
    printf("O somatorio é = %d\n", somatorio);
    printf("Multiplicacao é = %d\n", multiplicacao);
    return 0;
}
