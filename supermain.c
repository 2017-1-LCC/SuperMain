#include <stdio.h>

main() {


}



/* Raniel */

void iniciaPilha(nomeDaPilha *p) { //serve também para listas e outros
	
	p->topo= NULL;
}

void excluirPosicao(Lista *L) {
	
	int aux;
	int remover;
	int i;
	
	printf("Entre com a posição que deseja remover: ");
	scanf("%d", &remover);
	
	remover--;
	
	for (i=remover; i<L->indice; i++) {
		
		L-> num[i]= L-> num[i+1];
	}
	
	L-> indice--;
	
	printf("Posição removida! \n");
}
