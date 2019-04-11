#ifndef	_tipos_
#define _tipos_
	#include <stdio.h>
	#include <conio.h>
	typedef struct tipoCaminhoneiro{

char caminhoneiro[40];

char placa[10];

}TCaminhoneiro;


typedef struct tipoFila

{

TCaminhoneiro fila[10];

int tamanhoFila;

}TFila;
void inicializarFila (TFila *p);
void enfileirar (TFila *p);
void desenfileirar (TFila *p);
void apresentarFila (TFila *p);
#endif
