#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	
	char nome[30];
	char endereco[30];
	int idade;
	
	printf("Nome \n");
	scanf("%s", &nome);
	
	printf("Endereco \n");
	scanf("%s", &endereco);
	
	printf("Idade \n");
	scanf("%d", &idade);
	
	printf("\n Nome: %s", nome);
	printf("\n Idade: %d", idade);
	printf("\n Endereço: %s", endereco);
	
	return 0;
}
