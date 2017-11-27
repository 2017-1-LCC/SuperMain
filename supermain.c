#include <stdio.h>

main() {


}



/* Raniel */

void iniciaPilha(nomeDaPilha *p) //serve também para listas e outros
{
	p->topo= NULL;
}

void excluirPosicao(Lista *L)
{
	int aux;
	int remover;
	int i;
	
	printf("Entre com a posição que deseja remover: ");
	scanf("%d", &remover);
	
	remover--;
	
	aux= t-> num[remover];	
	
	for (i=remover; i<tamanho; i++)
	{
		t-> num[i]= t-> num[i+1];
	}
	
	t-> num[t->x]= aux;	
	t-> x--;
	
	printf("Posição removida!");
}
