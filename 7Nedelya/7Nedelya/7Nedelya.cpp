//1 H P H 12 h b
#include <iostream>
#include <iomanip>
#include <cmath>

void ExOne();
void ExTwo();
void ExThree();

int main()
{
	//ExOne();
	//ExTwo();
	ExThree();
}

void ExOne() { 
	int z;
	std::cin >> z;

	for (int i = 1; i < z; i++) {

		for (int x = 0; x < i; x++) {
			std::cout << 0;
		}

		std::cout << std::endl;
	}

	std::cout << std::endl; }
void ExTwo(){
	float Prk, Str, Kon;
	float y;
	std::cout << " Enter spacing \n Enter function start \n Enter end of function \n\t";
	std::cin >> Prk >> Kon >> Str;

	std::cout.precision(5); //красивое округление (точность) и + библиотека <iomanip>
	while (Kon < Str) {
		y = -(5 + 4*Kon)*(5 + 4*Kon) + 8*Kon;
		std::cout << "\t"
			<< Kon
			
			<< "\t\t\t\t"
			<< y
			<< std::endl;
		Kon += Prk;
	}
}
void ExThree() {
	float Prk, Str, Kon;
	float y;
	std::cout << " Enter spacing \n Enter function start \n Enter end of function \n\t";
	std::cin >> Prk >> Kon >> Str;

	std::cout.precision(5); 
	while (Kon < Str) {
		y = sqrt (5 + Kon/3) + 11*Kon + cos(2 * Kon + 15) /sin( 2*Kon + 15) ; // то же самое, что и во 2 задании, но ctg заменяем на cos/sin
		std::cout << "\t"
			<< Kon

			<< "\t\t\t\t"
			<< y
			<< std::endl;
		Kon += Prk;
	}

}