#include "Fraction.h"
#include <numeric>

using namespace std;

Fraction::Fraction() : numerator(1), denominator(1)
{
}

Fraction::Fraction(int n, int d) : numerator(n), denominator(d)
{
	if (denominator == 0)
	{
		denominator = 1;
	}
}

Fraction Fraction::operator+(Fraction& b) const
{
	int d = lcm(denominator, b.denominator);
	int n = numerator * (d / denominator) + b.numerator * (d / b.denominator);
	return Fraction(n, d);
}

Fraction Fraction::operator-(Fraction& b) const
{
	int d = lcm(denominator, b.denominator);
	int n = numerator * (d / denominator) - b.numerator * (d / b.denominator);
	return Fraction(n, d);
}

Fraction Fraction::operator*(Fraction& b) const
{
	int d = denominator * b.denominator;
	int n = numerator * b.numerator;
	return Fraction(n, d);
}

Fraction Fraction::operator/(Fraction& b) const
{
	int n = numerator * b.denominator;
	int d = denominator * b.numerator;
	return Fraction(n, d);
}

Fraction Fraction::operator-() const
{
	return Fraction(-numerator, denominator);
}
