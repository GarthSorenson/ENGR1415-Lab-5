#include "Complex.h"
#include <iostream>
using namespace std;

Complex::Complex(double real, double imaginary)
{
	real_ = real;
	imaginary_ = imaginary;
}

void Complex::setReal(double real)
{
	real_ = real;
}

void Complex::setImaginary(double imaginary)
{
	imaginary_ = imaginary;
}

Complex Complex::add(const Complex& second) const
{
	Complex sum;
	sum.setReal(real_ + second.real_);
	sum.setImaginary(imaginary_ + second.imaginary_);
	return sum;
}

Complex Complex::subtract(const Complex& second) const
{
	Complex diff;
	diff.setReal(real_ - second.real_);
	diff.setImaginary(imaginary_ - second.imaginary_);
	return diff;
}

void Complex::print() const
{
	cout << '(' << real_ << '+' << imaginary_ << 'i' << ')';
}