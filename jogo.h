#pragma once
#include<SFML/Graphics.hpp>
#include "jogador.h"
#include "inimigo.h"
#include "ListaEntidades.h"
#include "Fase.h"

class jogo
{
private:
	sf::RenderWindow window;
	jogador *player;
	ListaEntidades* LE;
	Fase* f1;

public:
	jogo();
	~jogo();

	void executar();
};

