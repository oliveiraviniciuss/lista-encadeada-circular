#include <stdio.h>
#include <stdlib.h>

typedef struct lista Lista;

struct lista {
	int info;
	Lista* prox;
};


//Cria a lista já inicializada com 1 elemento.
Lista* criaLista(int);
void insereLista(Lista*, int);
void imprimeLista(Lista*);
void buscaNumero(int, Lista*);
