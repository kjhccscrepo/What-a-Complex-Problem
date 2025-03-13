#pragma once

#include <string>

class ComplexNumber
{
private:
	double real;
	double imag;
	double divdenom;

public:
	ComplexNumber(double r, double i);
	double getReal();
	double getImag();
	std::string prettyPrint();
	ComplexNumber add(ComplexNumber n);
	ComplexNumber sub(ComplexNumber n);
	double mag();
	ComplexNumber mult(ComplexNumber n);
	ComplexNumber divi(ComplexNumber n);
	std::string diviPrettyPrint(ComplexNumber n);
};
