#include <iostream>
#include <stdio.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int escolhas,camisa=30,regata=15,bermuda=55,quantidade,continuar;
int soma,produto;
nota();
int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	char nome[50],cpf[12];
	
	printf("\t\t*****************************MODA PIRATA DE LUXO*****************************\n");
	printf("\t\t*****************************************************************************\n");
	printf("\n Insira seu nome:\n");
	fgets(nome,40,stdin);
	printf("Insira seu CPF: \n");
	fgets(cpf,12,stdin);
	
	// ******************************** ************
	printf("\n-----------------------Opções para compra-----------------------\n");
	printf(" 1--Camisa Nike \n 2--Regata Machão\n 3--Bermuda\n");
	printf("-------------------------------------------------------------------\n");
	scanf("%d",&escolhas);
	
	/**********************************/

switch(escolhas){
		case 1:
			printf("\tCAMISA NIKE\n", camisa);
			printf("Quantidade: ");
			scanf("%d", &quantidade);
			quantidade = camisa * quantidade;
			break;
		case 2:
			printf("\tREGATA\n", regata);
			printf("Quantidade: ");
			scanf("%d", &quantidade);
			quantidade = regata*quantidade;
			break;
		case 3:
			printf("\tBERMUDA\n", bermuda);
			printf("Quantidade:");
			scanf("%d", &quantidade);
			quantidade = bermuda * quantidade;
			break;
		default:
			printf("Opção inválida\n");
			break;		
}
soma = quantidade;
nota();
	
	
	
	return 0;
}
void nota(){
printf("****************** CUPOM FISCAL *********************\n");
printf("Cliente: %s", nome);
printf("CPF: %s", cpf);
printf("Total R$ %d\n",soma);
printf("********************************************************");

}
