#include <iostream>



	void swap_1(int *p1, int *p2){

		std::cout << "\nPrimer numero era: %c" << p1;
		std::cout << "\nSegundo numero era: %c" << p2;

		int temp = *p1;
		*p1 = *p2;
		*p2 = temp;

		std::cout << "\nPrimer numero es: " << (int) p1;
		std::cout << "\nSegundo numero es: " << (int) p2;

     }

    void swap_2(int &p1, int &p2){

		std::cout << "\nPrimer numero era: " << p1;
		std::cout << "\nSegundo numero era: " << p2;

		int temp = p1;
		p1 = p2;
		p2 = temp;

		std::cout << "\nPrimer numero es: " << p1;
		std::cout << "\nSegundo numero es: " << p2;

	}
