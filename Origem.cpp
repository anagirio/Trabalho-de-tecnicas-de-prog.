#include "jogo.h"
#include <iostream>
#include <SFML/Graphics.hpp>


int main()
{
	jogo obj;
	sf::RenderWindow window(sf::VideoMode(800, 800), "nome", sf::Style::Default);
	sf::RectangleShape player(sf::Vector2f(100.0f, 100.0f));
	sf::RectangleShape plataforma(sf::Vector2f(800.0f, 50.0f));


	plataforma.setFillColor(sf::Color::Black);
	//player.setFillColor(sf::Color::Red);
	sf::Texture text_player;
	text_player.loadFromFile("mario.png");
	player.setTexture(&text_player);

	plataforma.setPosition(0.0f, 750.0f);
	player.setPosition(300.0f, 300.0f);
	//player.setOrigin(50.0f, 50.0f); //offset para o objeto

	while (window.isOpen())
	{
		sf::Event e;
		while (window.pollEvent(e))
		{
			switch (e.type)
			{
			case sf::Event::Closed:
				window.close();
				break;
			case sf::Event::Resized:
				std::cout << e.size.width << std::endl << e.size.height << std::endl;
				break;
			case sf::Event::TextEntered:
				if(e.text.unicode<128)
					printf("%c", e.text.unicode);
			}
		}

		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))//para mover o objeto com o mouse
		{
			sf::Vector2i mousePos = sf::Mouse::getPosition(window);
			player.setPosition((float)mousePos.x, static_cast<float>(mousePos.y));
		}

		window.clear(sf::Color::White);//(cor)
		window.draw(player);
		window.draw(plataforma);

		window.display();
	}
}