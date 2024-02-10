#include <iostream>
#include <math.h> //заголовочный файл, вкл. функции математических операций(модуль,синус,кв.корень, степень и др.)
int main()
{
	unsigned char x = 7;
	// x = 00000111
	//unsigned char x = 98;
	// x = 01100010
	//unsigned char x = 241;
	// x = 11110001

	int i;
	std::cin >> i;

	unsigned int k = pow(2, i - 1); //возвести 2 в ст. i-1; 2^0=1, 2^1=10, 2^2=100, 2^3=1000
	bool res = k & x; //битовая операция и, получ. либо 0 либо не 0
	std::cout << res;
	

	return 0;
}