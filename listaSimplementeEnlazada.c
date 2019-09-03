#include<stdio.h>
#include<stdlib.h>

typedef struct {
	int dato;
	struct Nodo *next;	
} Nodo;

Nodo *primer = NULL;
Nodo *ultimo = NULL;

void agregar(Nodo *nodo) {
	
	nodo -> next = NULL;
	
	if (primer == NULL) {
		primer = nodo;
		ultimo = nodo;
	} else {
		ultimo -> next = nodo;
		ultimo = nodo;
	}
}

int main() {
	
	Nodo *primerNodo = malloc(sizeof(Nodo));
	primerNodo -> dato = 5;
	
	Nodo *segundoNodo = malloc(sizeof(Nodo));
	segundoNodo -> dato = 10;
	
	agregar(primerNodo);
	agregar(segundoNodo);
	
	Nodo *i = primerNodo;
	
	while (i != NULL) {
		printf("%i\n", i -> dato);
		i = i -> next;
	}
	
	return 0;
}
