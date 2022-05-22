#pragma once
template<class TE>class Elemento
{
private:
	Elemento<TE>* next;
	TE* item;
public:
	Elemento();
	~Elemento();
	void set_next(Elemento<TE>* next) { this->next = next; }
	void set_item(TE* item) { this->item = item; }
	const Elemento<TE*> get_next() { return next; }
	const TE* get_item() { return item; }
};

template<class TE>
inline Elemento<TE>::Elemento()
{
	next = nullptr;
	item = nullptr;
}

template<class TE>
inline Elemento<TE>::~Elemento()
{
}
