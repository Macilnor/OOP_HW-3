#include "Fraction.h"

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

string Fraction::getFraction() const
{
	string out = to_string(numerator) + "/" + to_string(denominator);
	return out;
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

bool Fraction::operator==(Fraction& b) const
{
	int d = lcm(denominator, b.denominator);
	if (numerator * (d / denominator) == b.numerator * (d / b.denominator))
	{
		return true;
	}
	return false;
}

bool Fraction::operator!=(Fraction& b) const
{
	return !(*this == b);
}

bool Fraction::operator>(Fraction& b) const
{
	int d = lcm(denominator, b.denominator);
	if (numerator * (d / denominator) > b.numerator * (d / b.denominator))
	{
		return true;
	}
	return false;
}

bool Fraction::operator<=(Fraction& b) const
{
	return !(*this > b);
}

bool Fraction::operator<(Fraction& b) const
{
	int d = lcm(denominator, b.denominator);
	if (numerator * (d / denominator) < b.numerator * (d / b.denominator))
	{
		return true;
	}
	return false;
}

bool Fraction::operator>=(Fraction& b) const
{
	return !(*this < b);
}

