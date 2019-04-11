#include "tipos.h"

void apresentarFila (TFila *p)
{
	if (p->tamanhoFila > 0)
	{
		for (int i = 0; i < p->tamanhoFila; i++)
		{
			printf("\n %s, %c", p->fila[i]);
		}
	}
	else
	{
		printf("\n Fila vazia!");
	}
	getch();
}
