#pragma once
#include <string>
#include <iostream>
#include <numeric>


using namespace std;

class Fraction
{
private:
	int numerator;
	int denominator;
public:
	Fraction();
	Fraction(int n, int d);

	string getFraction() const;
	Fraction operator+(Fraction& b) const;
	Fraction operator-(Fraction& b) const;
	Fraction operator*(Fraction& b) const;
	Fraction operator/(Fraction& b) const;

	Fraction operator-() const;

	bool operator==(Fraction& b) const;
	bool operator!=(Fraction& b) const;
	bool operator>(Fraction& b) const;
	bool operator<=(Fraction& b) const;
	bool operator<(Fraction& b) const;
	bool operator>=(Fraction& b) const;

};

