#pragma once
class Complex
{
private:
	double real_;
	double imaginary_;

public:
	Complex(double = 0.0, double = 0.0);

	void setReal(double);
	void setImaginary(double);

	void print()const;

	Complex add(const Complex&) const;
	Complex subtract(const Complex&) const;

};

