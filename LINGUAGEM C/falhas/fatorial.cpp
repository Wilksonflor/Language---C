#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int fatorial(int valor)
{

	if(valor != 1)//ponto de parada, se não tiver ficará em loop infinito.
	{
		return valor * fatorial(valor-1);//quando chegar em 1 ele retornará para 1, pois é o numero de inicio - sempre adicionando ou diminuindo dependendo da logica
	}
	else
	{
		return valor;
	}

	return 0;
}
