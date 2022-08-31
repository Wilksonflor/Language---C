#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int fatorial;
	int n1,resposta;
	
	printf("Digite o n1: ");
	scanf("%i", &n1);
	for (; fatorial >=1; --fatorial){
		resposta *= fatorial;
		printf("%i\n", resposta);	
	}
	
		
	
	return 0;
}
