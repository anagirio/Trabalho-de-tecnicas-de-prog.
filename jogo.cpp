#include "jogo.h"

jogo::jogo():
	window(sf::VideoMode(800, 800), "teste")
{
	player = new jogador();
	player->setWindow(&window);
	f1 = new Fase(player);
	executar();
}

void jogo::executar()
{
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear();
		player->draw();
		player->move();
		window.display();
	}
}

jogo::~jogo()
{
}
