#pragma once
#include "entidade.h"

class jogador:
	public entidade
{
private:

public:
	jogador();
	~jogador();
	void set_speed();
	void move();
};

