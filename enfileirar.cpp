#include "tipos.h"
void enfileirar (TFila *p)

{

if (p->tamanhoFila < 10)

{

printf("\n Informe nome do caminhoneiro: ");

fflush(stdin);

gets(p->fila[p->tamanhoFila].caminhoneiro);

printf("\n Informe placa do caminhao: ");

fflush(stdin);

gets(p->fila[p->tamanhoFila].placa);

p->tamanhoFila++;

}

else

{

printf("Fila cheia!");

}

}
