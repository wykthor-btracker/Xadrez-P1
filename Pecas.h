#include <stdio.h>
#ifndef pecas_h
#define pecas_h
#endif

typedef struct peca peca;
typedef struct peca *pontPeca;

struct peca
{
	int posX,posY;
	char *Nome;
	char *Imagem;
	//Sons.
	refTabuleiro pai;
};

pontPeca initPeca(int posX,int posY, char *nome, char *imagem, refTabuleiro pai);
	
