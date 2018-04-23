#include <iostream>
#include "ejer1.h"
#include "ejer2.h"
#include "ejer3.h"
#include "ejer4.h" 

int main() {

	int opcion = 10;

	while (opcion != 0) {

		std::cout << "\nPara el ejercicio 1 ingrese 1."<< std::endl;
		std::cout << "Para el ejercicio 2 ingrese 2."<< std::endl;
		std::cout << "Para el ejercicio 3 ingrese 3."<< std::endl;
		std::cout << "Para el ejercicio 4 ingrese 4."<< std::endl;
		std::cout << "Ingrese una opcion: ";
		std::cin >> opcion;

		switch (opcion) {

		case 1:
			ejer1();
			break;
		case 2:
			eje2();
			break;
		case 3:
			int p1;
			int p2;
			std::cout << "\nIngrese un numero: ";
			std::cin >> p1;
			std::cout << "\nIngrese otro numero: ";
			std::cin >> p2;

			swap_1(&p1, &p2);

			swap_2(p1, p2);
			
			break;
		case 4:

			int num;
			std::cout << "\nIngrese un valor, no debe ser primo: \n";
			std::cin >> num;
			Lista *nueva = new Lista();
			nueva->addElement(num);


			break;


		}

		}


	}