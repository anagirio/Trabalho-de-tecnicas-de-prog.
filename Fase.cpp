#include "Fase.h"

Fase::Fase(jogador* j1) : j1(j1)
{
	list = new ListaEntidades;
	i1 = new inimigo;
	inicializa_elem();
}

Fase::~Fase()
{
	delete list;
}

void Fase::inicializa_elem()
{
	list->LE.push(j1);
	list->LE.push(i1);
}
