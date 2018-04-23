#include <iostream>

int eje2() {


	int indice[] = { 1,2,3,4,5,6,7,8,9,10 };
	int *ptr = indice;
	ptr++;
	if ((*ptr *5) == (*(ptr + 8)))
	{
		printf("\ntrue\n");
	}
	else
	{
		printf("\nfalse\n");
	}

	return 0;

}