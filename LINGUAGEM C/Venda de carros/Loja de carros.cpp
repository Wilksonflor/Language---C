#include <stdio.h>
#include <locale.h>
#define SIZE 200
char nome[SIZE][50];
char endereco[SIZE][50];
int cpf[SIZE];
int telefone[SIZE];
int op;
void cadastro();

int main (void){
	setlocale(LC_ALL, "");
	/*******************************Área das variáveis da função principal******************************/
	char nome[30],cpf[12],endereco[30],telefone[12];
	int selecao,mensal,vistaouprazo,carro_lista,continuar;
	float valor,parcelas,avista,carro,soma,soma1;
	float kwid = 48.790, mobi = 49.240, uno = 64.990, hb20 = 64.190, joy = 64.240, gol= 65.590, siena = 66.290; 
/*******************************Área de entrada/saída das informações******************************/	
	printf ("*****TABELA CARROS À VENDA*****\n");	
	printf("__Modelo____Motor____Preco_\n");
	printf ("1-->Renault Kwid        1.0 12v         R$48.790\n");
	printf ("2-->Fiat Mobi           1.0 8V          R$49.240\n");
	printf ("3-->Fiat  Uno           1.0 8V          R$64.990\n");
	printf ("4-->Hyundai HB20        1.0 12V         R$64.190\n");
	printf ("5-->Chevrolet Joy       1.0 8V          R$64.240\n");
	printf ("6-->Volkswagen Gol      1.0 8V          R$65.590\n");
	printf ("7-->Fiat Grand Siena    1.0 8V          R$66.290\n");
	printf (" \nSelecione o seu veiculo: \n");
	scanf ("%i", &carro_lista);

	switch (carro_lista) {
		
		case 1 :
			carro = kwid;
			printf ("1-->Renault Kwid        1.0 12v       R$ %.3f\n\n ", kwid);
			break;
		case 2 :
			carro = mobi;
			printf ("2-->Fiat Mobi           1.0 8V         R$ %.3f\n\n",mobi);
			break;
		case 3 :
			carro = uno;
			printf ("3-->Fiat  Uno           1.0 8V        R$ %.3f\n\n",uno);
			break;
		case 4 :
			carro = hb20;
			printf ("4-->Hyundai HB20        1.0 12V       R$ %.3f\n\n",hb20);
			break;
		case 5 :
			carro = joy;
			printf ("5-->Chevrolet Joy       1.0 8V         R$ %.3f\n\n",joy);
			break;
		case 6 :
			carro = gol;
			printf ("6-->Volkswagen Gol      1.0 8V          R$ %.3f\n\n",gol);
			break;
		case 7 :
			carro = siena;
			printf ("7-->Fiat Grand Siena    1.0 8V          R$ %.3f \n\n",siena);
			break;
		default:
			printf("Opção inválida");
			break;
		
	}
printf("Deseja pagar à vista ou ver a tabela de parcelas?\n \t\tDigite\n 1--Á vista \n 2--Financiamento\n");
scanf("%d", &vistaouprazo);
if(vistaouprazo==1){
	printf("Você tem 10%% na compra do seu veiculo\n");
	avista = carro-(carro*0.1);
	printf("O seu valor Á vista é de: R$ %.3f", avista);
}
else{

	printf("\nDigite quantas parcelas você deseja simular: 1º 12x - 2º 24x - 3º 36x - 4º 48x\n");
	printf("Taxas de porcentagem ao mês 12x->3%% 24x->5%% 36x->6%% 48x->7%%\n");
	scanf("%d", &mensal);
	
	switch(mensal){
		
		case 1:
			printf("\nVocê escolheu dividir em 12x\n");
			parcelas = (carro/12);
			soma1 = parcelas+(parcelas*3/100);
			printf("Ficaria 12x de: %.3f\n", soma1);
			soma =soma1+carro;
			printf("O valor final do seu veiculo fica: %.3f", soma);
			break;
		case 2:
			printf("\nVocê escolheu dividir em 24x\n");
			parcelas = (carro/24);
			soma1 = parcelas+(parcelas*5/100);
			printf("Ficaria 12x de: %.3f\n", soma1);
			soma =soma1+carro;
			printf("O valor final do seu veiculo fica: %.3f", soma);
			break;
		case 3:
			printf("\nVocê escolheu dividir em 36x\n");
			parcelas = (carro/36);
			soma1 = parcelas+(parcelas*6/100);
			printf("Ficaria 12x de: %.3f\n", soma1);
			soma =soma1+carro;
			printf("O valor final do seu veiculo fica: %.3f", soma);
			break;
		case 4:
			printf("\nVocê escolheu dividir em 48x\n");
			parcelas = (carro/48);
			soma1 = parcelas+(parcelas*7/100);
			printf("Ficaria 12x de: %.3f\n", soma1);
			soma =soma1+carro;
			printf("O valor final do seu veiculo fica: %.3f", soma);
			break;
		default:
			printf("Você não escolheu quantas");
			break;
	}
}
cadastro();

	
return 0;
}
void cadastro(){
	static int linha;
	do{
		printf("\n Digite o seu nome:\n ");
		scanf("%s", &nome[linha]);
		printf("\n Digite o seu CPF:\n ");
		scanf("%d", &cpf[linha]);
		printf("\n Digite o seu telefone:\n ");
		scanf("%d", &telefone[linha]);
		printf("\n Digite o seu endereço:\n ");
		scanf("%s", &endereco[linha]);
		linha++;
	}while(op==1);
}


