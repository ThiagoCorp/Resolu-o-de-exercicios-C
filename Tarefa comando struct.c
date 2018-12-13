#include<stdio.h>
int main(){
struct livro{

char nome[50];
char autor[50];
int pagina;
float preco;
};
struct livro livro1;

printf("Cadastro livro\n");
printf("Digite o nome do livro\n");
gets(livro1.nome);
printf("Digite o nome do autor\n");
gets(livro1.autor);
printf("Digite o numero de paginas\n");
scanf("&d",&livro1.pagina);
printf("Digite o preco\n");
scanf("&f",&livro1.preco);


printf("%s:%s:%d:%f",livro1.nome,livro1.autor.livro1.pagina,livro1.preco);





return 0;

}
