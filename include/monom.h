// класс или структура Монома (coef-коэффициент, deg-целая свернутая степень)

#pragma once
#include <iostream>
using namespace std;

class Monom {
private:
	double coef;
	int deg;
public:
	Monom (double a=0, int deg=0);
	Monom (const Monom &m);
	~Monom();
	Monom& operator=(const Monom &m);
	friend ostream& operator<<(ostream &out, const Monom &m);
};



Monom::Monom(double _coef, int _deg) {
	coef=_coef;
	deg=_deg;
}

Monom::~Monom(){};

Monom::Monom (const Monom &m){
	coef=m.coef;
	deg=m.deg;
}

Monom& Monom::operator=(const Monom &m){
	if(this == &m)
		return *this;
	else
	{
		coef=m.coef;
		deg=m.deg;
		return *this;
	}
}

std::ostream& operator<<(ostream &out, const Monom &m)
  {
	  out << '(' << m.coef << ';' << m.deg << ')'<<endl;
	  return out;
  }
