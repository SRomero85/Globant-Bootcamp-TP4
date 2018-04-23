#include <iostream>



void ejer1() {

	std::cout << "\nint var = 40; //es valido";
	std::cout << "\nint &ref = var; // es valido";

	std::cout << "\nint &ref = 1;// no es valido por que se le esta dando un valor entero a una referencia";

	std::cout << "\nint var = 1; //es valido";
	std::cout << "\nint *ptr; //es valido";
	std::cout << "\nint &ref = var; //es valido";
	std::cout << "\n*ptr = ref; // no es valido por que no se la inicializo"<<std::endl;

}