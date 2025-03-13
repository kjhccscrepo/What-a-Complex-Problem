

#include <iostream>
#include "ComplexNumber.hpp"

int main()
{
	std::cout << "Hello and welcome to the driver program!" << std::endl;
	std::cout << "Please enter a complex number separated by spaces" << std::endl;

	double real_one, imag_one;
	std::cin >> real_one >> imag_one;

	std::cout << "Please enter another complex number separated by spaces" << std::endl;

	double real_two, imag_two;
	std::cin >> real_two >> imag_two;

	ComplexNumber a(real_one, imag_one);
	ComplexNumber b(real_two, imag_two);
	std::cout << "The first number is: " << a.prettyPrint() << std::endl;
	std::cout << "The second number is: " << b.prettyPrint() << std::endl;

	std::cout << "Their sum is: " << a.add(b).prettyPrint() << std::endl;
	std::cout << "Their difference is: " << a.sub(b).prettyPrint() << std::endl;

	std::cout << "Their product is: " << a.mult(b).prettyPrint() << std::endl;
	std::cout << "Their quotient is: " << a.divi(b).diviPrettyPrint(b) << std::endl;

	std::cout << "The magnitude of the first number is: " << a.mag() << std::endl;
	std::cout << "The magnitude of the second number is: " << b.mag() << std::endl;


	std::cout << "Goodbye!" << std::endl;
}
