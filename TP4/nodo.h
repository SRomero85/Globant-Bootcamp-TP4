#pragma once

class Nodo {
public:
	Nodo *siguiente;
	Nodo *anterior;
	Nodo(int valor);
	int valor;
};