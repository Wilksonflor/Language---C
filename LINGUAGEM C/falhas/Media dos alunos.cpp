#include <iostream>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char nome[20],sobrenome[20];
	float nota1=0;
	float nota2=0;
	float nota3=0;
	float nota4=0;
	float media;
	
	
	printf("\n Digite o nome do aluno: \n");
	fgets(nome,20,stdin);
	printf("\n Digite a primeira nota: \n");
	scanf("%f", &nota1);
	printf("\n Digite a segunda nota: \n");
	scanf("%f", &nota2);
	printf("\n Digite a terceira nota: \n");
	scanf("%f", &nota3);
	printf("\n Digite a quarta nota: \n");
	scanf("%f", &nota4);
	
	media = (nota1+nota2+nota3+nota4) / 4;
	printf("\tA media do aluno e: %2.f \n",media);

	if(media >= 7)
	{
		printf("%s APROVADO!!", nome);
	}
	else
	{
		if(media <=6);
		printf("%s-----REPROVADO!\t\t",nome);
	}
	
	return 0;
}
