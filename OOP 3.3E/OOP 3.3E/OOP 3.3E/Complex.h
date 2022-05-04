#pragma once
#include  "Pair.h"
class Complex: public Pair
{
public:
	Complex();
	Complex(int, int);
	Complex(const Complex&);
	~Complex();

	operator string() const;
	friend ostream& operator << (ostream&, const Complex&);
	friend istream& operator >> (istream&, Complex&);

	Complex& operator = (const Complex&);
	friend Complex operator + (const Complex&, const Complex&);
	friend Complex operator * (const Complex&, const Complex&);
	friend Complex operator - (const Complex&, const Complex&);
};
