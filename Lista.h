#pragma once
#include "Elemento.h"
#include <iostream>

template <class TL>class Lista
{
private:
	Elemento<TL>* primeiro;
	Elemento<TL>* ultimo;
	int len;
public:
	Lista();
	~Lista();

	int get_len() { return len; }
	TL* get_item(int pos)
	{
		Elemento<TL>* temp = primeiro;
		if (pos < 0)
		{
			std::cerr << "invalid access to the list (abaixo)." << std::endl;
			exit(1);
		}
		if (pos > len)
		{
			std::cerr << "invalid access to the list (acima)." << std::endl;
			exit(1);
		}
		for (int i = 0; i < pos; i++)
		{
			temp = temp->get_next();
		}
		return temp->get_item();
	}
	void push(TL* item)
	{
		if (primeiro == nullptr)
		{
			primeiro = new Elemento<TL>;
			primeiro->set_item(item);
			ultimo = primeiro;
		}
		else
		{
			Elemento<TL>* temp = new Elemento<TL>;
			temp->set_item(item);
			ultimo->set_next(temp);
			ultimo = temp;
		}
		len++;
	}
	void pop(TL* item)
	{
		Elemento<TL>* temp = primeiro;
		Elemento<TL>* tempAnt = nullptr;//anterior ao temp.
		while (temp->get_item() != item)
		{
			tempAnt = temp;
			temp = temp->get_next();
		}
		if (temp == primeiro)
		{
			primeiro = temp->get_next();
		}
		else if (temp == ultimo)
		{
			tempAnt->set_next(nullptr);
			ultimo = tempAnt;
		}
		else
		{
			tempAnt->set_next(temp->get_next());
		}
		delete temp;
		len--;
	}

};

template<class TL>
inline Lista<TL>::Lista()
{
	primeiro = nullptr;
	ultimo = nullptr;
	len = 0;
}

template<class TL>
inline Lista<TL>::~Lista()
{
}
