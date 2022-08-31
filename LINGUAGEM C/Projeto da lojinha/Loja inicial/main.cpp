#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"portugues");
	int calca,camisa,bermuda;
	char nome[50];
	char cpf[11];
	
		
	calca = 89;
	bermuda = 35;
	camisa = 62;
	
	printf("**********Seja Bem-Vindo ao brega ****************\n");
	printf("Digite o seu nome:\n");
	fgets(nome,50,stdin);
	printf("Digite o seu CPF:\n");
	fgets(cpf,11,stdin);
	printf("Segue a lista de roupas disponoveis e os valores: \n");
	printf("Calca R$: %.2d \n", calca);
	printf("bermuda R$: %.2d \n", bermuda);
	printf("Calca R$: %.2d \n", camisa);
	printf("*************************************************\n\n");
	
	printf("Agora selecione a cor da sua camisa:\n");
	printf(" 1 - Camisa Azul\n 2 - Camisa Verde\n 3 - Camisa Laranja\n");
	scanf("%d", &camisa);
//agora vou colocar o comando de escolha(Switch);
	switch (camisa)
	{
		case 1:
			printf("Camisa Azul\n", camisa);
			break;
		case 2:
			printf("Camisa Verde\n", camisa);
			break;
		case 3:
			printf("Camisa Laranja\n", camisa);
			break;
		default:
			printf("Opcao invalida\n");
			break;
	}
	printf("Agora escolha a cor da sua bermuda:\n");
	printf(" 1 - Azul\n 2 - Marrom\n 3 - Preta\n");
	scanf("%d", &bermuda);
	switch (bermuda)
	{
		case 1:
			printf("Bermuda Azul\n", bermuda);
			break;
		case 2:
			printf("Bermuda Marrom\n", bermuda);
			break;
		case 3:
			printf("Bermuda Preta\n", bermuda);
			break;
		default:
			printf("Opcao invalida\n");
			break;
	}

	return 0;
}
