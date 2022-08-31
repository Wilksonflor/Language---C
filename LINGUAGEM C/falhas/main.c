#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int contador;
	
	printf("Digite um valor \n");
	scanf("%d", &contador);
	
	for (contador; contador >=1; contador --)
	{
		printf("%d Contador \n", contador);
	}
	return 0;
}
