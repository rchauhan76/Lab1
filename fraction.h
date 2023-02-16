#ifndef _FRACTION_H
#define _FRACTION_H

#include <iostream>
#include <cstdint>

class Fraction{
public:
	Fraction(int32_t n=0, int32_t d=1);
	~Fraction() = default;

Fraction operator+(Fraction rhs);

Fraction operator-(Fraction rhs);

Fraction operator*(Fraction rhs);

Fraction operator/(Fraction rhs);

Fraction& operator=(Fraction rhs);
bool operator==(Fraction rhs);
bool operator!=(Fraction rhs);
bool operator<(Fraction rhs);
bool operator>(Fraction rhs);
bool operator<=(Fraction rhs);
bool operator>=(Fraction rhs);

int32_t getNum() {return num;}
int32_t getDen() {return den;}

private:
	int32_t 
	num,
	den;
};

std::istream &operator>>(std::istream &, Fraction &);
std::ostream &operator<<(std::ostream &, Fraction );

#endif