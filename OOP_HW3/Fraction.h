#pragma once

class Fraction
{
private:
	int numerator;
	int denominator;
public:
	Fraction();
	Fraction(int n, int d);

	Fraction operator+(Fraction& b) const;
	Fraction operator-(Fraction& b) const;
	Fraction operator*(Fraction& b) const;
	Fraction operator/(Fraction& b) const;

	Fraction operator-() const;


};

