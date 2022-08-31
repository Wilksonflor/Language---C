#include <iostream>
#include <string.h>
#include <stdio.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char nome[50];//variáveis globais
char cpf[12];//variáveis globais
void menuEscolha();
int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	float lapis,caneta,lapiseira,produto;
	menuEscolha();
	return 0;
}
void menuEscolha(){
		//***********************************comandos***********************************
	printf("\t\t\t********Papelaria do borracha********\n");
	printf("\t\t\t_____________________________________\n\n");
	printf("Escolha o seu produto: \n\n");
	printf("**************************\n");
	printf(" 1--Caneta\n 2--Lápis\n 3--Borracha\n");
	printf("**************************\n");
	
}
