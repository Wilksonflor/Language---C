#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float sal=0;
	float inss=0;
	float ir=0;
	float sal_liq=0;
	
	printf("Digite o seu salario bruto: \n");
	scanf("%f", &sal);
	
	if(sal <= 1693.72)
	{
		inss = sal *0.08;
	}
	else
	{
	if(sal >= 1693.73 && sal <= 2822.90);
	
		inss = sal *0.09;
	}
	sal_liq=(sal-inss)-ir;
	printf("Desconto inss: %2.f \n", inss);
	printf("Salario liquido: %2.f \n", sal_liq);
	return 0;
}
