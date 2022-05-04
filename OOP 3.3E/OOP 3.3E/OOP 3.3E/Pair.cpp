#include "Pair.h"
Pair::Pair()
{
    first = 0;
    second = 0;
}
Pair::Pair(int f = 0, int s = 0)
{
    first = f;
    second = s;
}
Pair::Pair(const Pair& r)
{
    first = r.first;
    second = r.second;
}
Pair::~Pair(void) { }

istream& operator >> (istream& in, const Pair& r) {
    int first, second;
    cout << endl;
    cout << "a =  "; in >> first;

    cout << "b =  "; in >> second;
    r.GetFirst();
    r.GetSecond();
    return in;

}
ostream& operator << (ostream& out, const Pair& r)
{
    out << string(r);
    return out;
}
Pair::operator string () const
{
    stringstream sstr;
    sstr << endl << " ( " << first << " , " << second << " )" << endl << endl;
    return sstr.str();
}

Pair& Pair::operator = (const Pair& r)
{
    first = r.first;
    second = r.second;
    return *this;
}
Pair operator + (const Pair& a, const Pair& b)
{
    return Pair(a.first + b.second, a.first + b.second);
}
Pair& Pair::operator++()
{
    ++first;
    return *this;
}

Pair& Pair::operator--()
{
    --first;
    return *this;
}

Pair Pair::operator++(int)
{
    Pair t(*this);
    first++;
    return t;
}

Pair Pair::operator--(int)
{
    Pair t(*this);
    first--;
    return t;
}
