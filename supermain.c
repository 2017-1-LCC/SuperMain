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
  printf("Entre com a posição que deseja remover: ");
  scanf("%d", &remover);

  if (remover > max-1)
  {
    printf("Opção inválida!\n");
  } else
  {
    remover--;

    auxMatricula= L-> matricula[remover];
    auxNota= L-> nota[remover];

    L-> matricula[remover+1]= L-> matricula[remover];
    L-> nota[remover+1]= L-> nota[remover];

    L-> matricula[L->i]= auxMatricula;
    L-> nota[L->i]= auxNota;

    L->i--;
 }
