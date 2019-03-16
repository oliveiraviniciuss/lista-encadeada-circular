#include "lista-encadeada-circular.h"



int main(){
	
	//Teste 1
	
	// Lista* lst = criaLista(2);
	// insereLista(lst,3);
	// insereLista(lst,4);
	// insereLista(lst,0);
	// insereLista(lst,1);
	// buscaNumero(6,lst);
	
	

	//Teste 2
	/*
	Lista* lst = criaLista(2);
	insereLista(lst,3);
	insereLista(lst,4);
	insereLista(lst,0);
	insereLista(lst,1);
	buscaNumero(4,lst);
	
	*/
 
	//Teste 3

	
	Lista* lst = criaLista(4);
	insereLista(lst,6);
	insereLista(lst,11);
	insereLista(lst,-1);
	insereLista(lst,1);
	insereLista(lst,2);
	insereLista(lst,3);
	buscaNumero(3,lst);
	

	free(lst);

}


Lista* criaLista(int valor){
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = valor;
	novo->prox = novo;
	return novo;
}

void insereLista(Lista* lst, int val){
	
	if(lst == NULL){
		printf("A lista está vazia.");
		return;
	}

	Lista *laco; //Variavel auxiliar para percorrer o laço e encontrar o fim da lista
	Lista *novo;
	for(laco = lst; laco->prox != lst; laco = laco->prox);

	novo = (Lista*) malloc(sizeof(Lista));
	
	novo->info = val;
	novo->prox = laco->prox;
	laco->prox = novo;


}

void imprimeLista(Lista* lst){
	Lista* p = lst;
	
	if(p) do {
		printf("%d\n", p->info);
		p = p->prox;
	} while(p != lst);

}

void buscaNumero(int x, Lista* lst){
	if(lst == NULL){
		printf("A lista está vazia.");
		return;
	}

	Lista *laco = lst; //Variavel auxiliar para percorrer o laço e tentar encontrar o número
	

	do{
		if(laco->info == x){
			printf("Sim!\n");
			return;
		}

		laco = laco->prox;
	}	while(laco != lst);

	printf("Não!\n");

}


