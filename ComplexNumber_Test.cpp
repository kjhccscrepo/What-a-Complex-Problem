#include <cassert>
#include <iostream>

#include "ComplexNumber.hpp"

int main()
{
  ComplexNumber a(4, 5);
  ComplexNumber b(6, 7);

  std::cout << "Starting the tests!" << std::endl;
  //addition tests
  ComplexNumber c = a.add(b);
  assert(a.getReal() == 4);
  assert(b.getImag() == 7);
  assert(c.getReal() == 10);
  assert(c.getImag() == 12);
  //subtraction tests
  c = a.sub(b);
  assert(c.getReal() == -2);
  assert(c.getImag() == -2);
  //multiplication tests
  c = a.mult(b);
  assert(c.getReal() == -11);
  assert(c.getImag() == 58);
  //division tests
  c = a.divi(b);
  assert(c.getReal() == 59);
  assert(c.getImag() == -2);
  //magnitute tests
  assert(a.mag() == 6.4031242374328486865);
  assert(b.mag() == 9.21954445729288731);
  std::cout << "All of the tests passed!" << std::endl;
}
