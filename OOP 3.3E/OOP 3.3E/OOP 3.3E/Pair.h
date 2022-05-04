#pragma once
#include "Object.h"
#include <iostream>
#include <sstream>

using namespace std;

class Pair : public Object
{
private:
	int first, second;
public:
	Pair();
	Pair(int, int);
	Pair(const Pair&);
	~Pair();

	int GetFirst() const { return first; }
	int GetSecond() const { return second; }

	void SetFirst(int first) { this->first = first; };
	void SetSecond(int second) { this->second = second; };

	operator string() const;
	friend istream& operator >> (istream& out, Pair&);
	friend ostream& operator << (ostream&, const Pair&);
	Pair& operator = (const Pair&);
	friend Pair operator + (const Pair& a, const Pair& b);

	Pair& operator ++ ();
	Pair& operator -- ();
	Pair operator ++ (int);
	Pair operator -- (int);

};
