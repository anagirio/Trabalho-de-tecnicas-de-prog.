#pragma once
#include "jogador.h"
#include "inimigo.h"
#include "ListaEntidades.h"

class Fase
{
private:
	ListaEntidades *list;
	inimigo* i1;
	jogador* j1;
public:
	Fase(jogador* j1);
	Fase(){}
	~Fase();

	void inicializa_elem();
	ListaEntidades* get_list() { return list; }
};

