#include <string>
#include <cmath>
#include "ComplexNumber.hpp"

ComplexNumber::ComplexNumber(double r, double i)
{
	real = r;
	imag = i;
	divdenom = (pow(r, 2) + (pow(i, 2)));
}

std::string ComplexNumber::prettyPrint()
{
	return std::to_string(real) + " + " + std::to_string(imag) + "i";
}

double ComplexNumber::getReal()
{
	return real;
}

double ComplexNumber::getImag()
{
	return imag;
}

ComplexNumber ComplexNumber::add(ComplexNumber n)
{
	double real_sum = real + n.getReal();
	double imag_sum = imag + n.getImag();
	return ComplexNumber(real_sum, imag_sum);
}
ComplexNumber ComplexNumber::sub(ComplexNumber n)
{
	double real_sum = real - n.getReal();
	double imag_sum = imag - n.getImag();
	return ComplexNumber(real_sum, imag_sum);
}
double ComplexNumber::mag()
{
	double magOfComplexNumber = sqrt((pow(real, 2)) + pow(imag,2));
	return magOfComplexNumber;
}
ComplexNumber ComplexNumber::mult(ComplexNumber n)
{
	double real_sum = (real * n.getReal()) - (imag * n.getImag());
	double imag_sum = (real * n.getImag()) + (imag * n.getReal());
	return ComplexNumber(real_sum, imag_sum);
}
ComplexNumber ComplexNumber::divi(ComplexNumber n)
{
	double real_sum = (real * n.getReal()) + (imag * n.getImag());
	double imag_sum = (real * n.getImag()) - (imag * n.getReal());
	return ComplexNumber(real_sum, imag_sum);
}
std::string ComplexNumber::diviPrettyPrint(ComplexNumber n)
{
	return std::to_string(real) + " - " + std::to_string(imag) + "i / " + std::to_string(n.divdenom);
}