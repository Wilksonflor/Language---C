#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float salario, inss, ir, salario_liq;
	
	printf("Digite o seu salario bruto:");
	scanf("%f", &salario);
	
	if(salario <= 1693.72);
	{
		inss =salario* 0.08;
	}
	else
	if(salario >= 1693.73 && salario <= 2822.90)
	{
		inss = salario * 0.09;
	}
	salario_liq = (salario-inss) - ir;
	
	printf("\nDesconto Inss: %f", inss);
	printf("\nSalario liquido: %2.f", salario_liq);
	return 0;
}
