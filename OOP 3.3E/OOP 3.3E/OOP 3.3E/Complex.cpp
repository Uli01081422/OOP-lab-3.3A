#include "Complex.h"

Complex::Complex()
{
    int first = 0;
    int second = 0;
    SetFirst(first);
    SetSecond(second);
}
Complex::Complex(int f = 0, int s = 0)
{
    int first = f;
    int second = s;
    SetFirst(first);
    SetSecond(second);
}
Complex::Complex(const Complex& r)
{
    int first = r.GetFirst();
    int second = r.GetSecond();
    SetFirst(first);
    SetSecond(second);
}
Complex::~Complex() { }

istream& operator >> (istream& in, Complex& r)
{
    int first = 0, second = 0;
    cout << "a = "; in >> first;
    cout << "b = "; in >> second;
    r.SetFirst(first);
    r.SetSecond(second);
    return in;
}
ostream& operator << (ostream& out, const Complex& r)
{
    out << string(r);
    return out;
}
Complex::operator string() const
{
    stringstream sstr;
    sstr << endl << " ( " << GetFirst() << " , " << GetSecond() << " )" << endl << endl;
    return sstr.str();
}

Complex& Complex::operator=(const Complex& r)
{
    int first = 0, second = 0;
    first = r.GetFirst();
    second = r.GetSecond();
    return *this;
}

Complex operator + (const Complex& a, const Complex& b)
{
    return Complex(a.GetFirst() + b.GetSecond(), a.GetFirst() + b.GetSecond());
}

Complex operator * (const Complex& a, const Complex& b)
{
    return Complex(a.GetFirst() * b.GetSecond() - (a.GetFirst() * b.GetSecond(), a.GetFirst() * b.GetSecond()+ a.GetFirst() * b.GetSecond()));
}

Complex operator - (const Complex& a, const Complex& b)
{
    return Complex(a.GetFirst() - b.GetSecond(), a.GetFirst() - b.GetSecond());
}
