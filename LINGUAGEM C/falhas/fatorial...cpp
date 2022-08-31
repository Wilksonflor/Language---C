#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int fatorial;//nao preciso colocar =5 por exemplo porque eu quero que o usuário determine o fatorial
	int resposta = 1;//a variavel que vai conter o resultado da expressão.
	printf ("Digite o numero que deseja saber o fatorial: \n");
	scanf ("%i", &fatorial);
	
	for( ;fatorial >= 1; --fatorial)//enquanto fatorial for Maior ou Igual a 1, irá diminuir 1 numero do fatorial(--fatorial)(antes era 4! agora é 3!)
	{
		resposta = fatorial*resposta;//para calcular fatorial(Numero digitado)+resposta que é =1
	}
	printf("O valor do fatorial e: %i\n", resposta);
	return 0;
}
