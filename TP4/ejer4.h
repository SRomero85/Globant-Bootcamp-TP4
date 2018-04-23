#pragma once
#include "nodo.h"

class Lista {

public:
	void addElement(int x);
	Lista();
	~Lista();

private:

	bool primo(int check);
	Nodo *primero;
};