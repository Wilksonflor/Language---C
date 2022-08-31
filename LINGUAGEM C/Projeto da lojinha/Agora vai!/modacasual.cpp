#include <iostream>
#include <locale.h>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//*************************************funções e variaveis globais*************************************
	int produto;
	int camisa,calca,tenis,continuar;
	int soma,total;
	int camisa2=60,calca2=120,tenis2=199;
	int quantidade_calca,quantidade_tenis,quantidade_camisa;
void menuinicial();
void escolhas();
void menuinicial(){
printf("*************************************************************\n");
printf("\t\tProdutos disponiveis\n\n");
printf(" \t\t1--Camisas R$60,00\n \t\t2--Calças R$ 120,00\n \t\t3--Tênis R$ 199,00\n");
printf("*************************************************************\n\n");
}
void escolhas(){//FUNÇÃO PARA ESCOLHER O PRODUTO

	if(produto>=1){
		switch(produto){
			case 1:
				camisa = camisa2;
				printf("Digite a quantidade: \n");
				scanf("%d", &quantidade_camisa);
				printf("*******************************\n");
				break;
			case 2:
				calca = calca2;
				printf("Digite a quantidade: \n");
				scanf("%d", &quantidade_calca);	
				printf("*******************************\n");		
				break;
			case 3:
				tenis = tenis2;
				printf("Digite a quantidade: \n");
				scanf("%d", &quantidade_tenis);
				printf("*******************************\n");
			default:
				printf("Opção inválida --- Selecione um produto: \n");
				menuinicial();
				break;
			
		}
}
}
/*---------------------------------------------------FUNÇÃO PRINCIPAL---------------------------------------------------*/
int main(int argc, char** argv) {
	//variáveis
	setlocale(LC_ALL, "");

	//variaveis para nome, endereço e cpf(Cadastro)
	char nome[50];
	char cpf[12];
	char endereco[25];

	
//**********************************Começa a brincadeira aqui**********************************
printf("\t\t--------------------- Moda Pirataria de Luxo ------------------\n");
printf("\t\t---------------------------------------------------------------\n\n");
	printf("Insira seu nome\n");
	fgets(nome,50,stdin);
	printf("Insira seu CPF\n");
	fgets(cpf,12,stdin);
menuinicial();
printf("Selecione um produto\n");
scanf("%d",&produto);
escolhas();
printf("Deseja adicionar mais algum produto?\n\n");
printf("Digite 1-> Sim ou 2- Não\n");
scanf("%d",&continuar);
while (continuar==1 && continuar <=3)
{
		menuinicial();
		scanf("%d", &produto);
		escolhas();
		printf("Deseja adicionar mais algum produto?\n\n");
		printf("Digite 1-> Sim ou 2- Não\n");
		scanf("%d",&continuar);
		menuinicial();
		escolhas();
		
}
	printf("**************** CUPOM FISCAL ****************\n\n");
	printf("Cliente: %s", nome);
	printf("CPF: %s", cpf);
	printf("O valor total é de: R$ %d\n", total);
	printf("**********************************************");	








	return 0;
}




	



