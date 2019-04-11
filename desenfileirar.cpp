#include "tipos.h"
 void desenfileirar (TFila * p){
 	if(p->tamanhoFila > 0 ){
 		for(int x = 0 ;x < p->tamanhoFila-1; x++){
 			p->fila[x] = p->fila[x+1];
		 }	
		 p->tamanhoFila--;
	 }
	 else{
	 	printf("\n Fila vazia!");
	 }
 }
