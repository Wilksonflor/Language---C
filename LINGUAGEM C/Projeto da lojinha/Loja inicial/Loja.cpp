#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	int calca,camisa,bermuda;
	char nome[50];
	char cpf[12];
	int produtos;
		
	
	printf("**********Seja Bem-Vindo ao brega ****************\n\n");
	printf("Digite o seu nome:\n");
	fgets(nome,50,stdin);
	printf("Digite o seu CPF:\n");
	fgets(cpf,12,stdin);
	printf("O que você deseja comprar hoje?: \n");
	printf(" 1 - Camisa \n 2 - Calca \n 3 - Bermuda\n");
	scanf("%d,%d,%d",camisa,calca,bermuda);
	/**************************************************************************/
	
	printf("Segue a lista de roupas disponoveis e os valores: \n");
	printf("camisa R$: %.2d \n", calca);
	printf("bermuda R$: %.2d \n", bermuda);
	printf("Calca R$: %.2d \n", camisa);
	printf("*************************************************\n\n");
	
	printf("Agora selecione a cor da sua camisa:\n");
	printf(" 1 - Camisa Azul\n 2 - Camisa Verde\n 3 - Camisa Laranja\n");
	scanf("%d", &camisa);
//agora vou colocar o comando de escolha(Switch);

	printf("Agora escolha a cor da sua bermuda:\n");
	printf(" 1 - Azul\n 2 - Marrom\n 3 - Preta\n");
	scanf("%d", &bermuda);
	
	return 0;
}
