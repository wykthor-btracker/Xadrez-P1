#include <stdio.h>
#include <stdlib.h>
#include "Pecas.h"
#include "Tabuleiro.h"
#define DEBUG if(0)

pontPeca initPeca(int px,int py, char *nome, char *imagem,refTabuleiro pai)
{
	pontPeca new = malloc(sizeof(peca));
	new->posX = px;
	new->posY = py;
	new->Nome = malloc(sizeof(char)*10);
	strcpy(new->Nome,nome);
	new->Imagem = malloc(sizeof(char)*100);
	strcpy(new->Imagem,imagem);
	new->pai = pai;
	return new;
}
