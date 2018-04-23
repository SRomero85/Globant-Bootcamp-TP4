#include <iostream>
#include "ejer4.h"
#include "nodo.h"





bool Lista::primo(int check) {

	int num, i, cont;
	cont = 0;
	num = check;

	for (i = 1; i <= num; i++) {

		if (num % i == 0) {
			cont++;

		}

	}
		if (cont == 2){
			return true;

		}
		else {
			return false;
		}
}




void Lista::addElement(int x) {
	if (primo(x) == false) {
		Nodo *nuevo = new Nodo(x);
		nuevo->valor = x;
		nuevo->anterior = primero;
		if (primero == nullptr)
		{
			primero = nuevo;
			nuevo->siguiente = nuevo;

		}
		else
		{
			primero = nuevo;
		}

	}
	else { std::cout << "\nNo se puede ingresar el numero primo.\n"; }
}


Lista::Lista() {

	primero = nullptr;
}

Lista::~Lista() {
	Nodo *nodo = primero;
	Nodo *borrar;
	while (nodo != nullptr)
	{
		borrar = nodo;
		nodo = nodo->siguiente;
		delete borrar;
	}
}