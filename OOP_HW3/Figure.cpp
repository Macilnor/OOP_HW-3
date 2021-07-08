#include "Figure.h"
#define _USE_MATH_DEFINES
#include <cmath>

Parallelogram::Parallelogram() : sideA(1.0), sideB(2.0), angleA(45.0)
{
}

Parallelogram::Parallelogram(double A , double B , double anA ) : sideA(A), sideB(B), angleA(anA)
{
}

double Parallelogram::getSideA() const
{
	return sideA;
}

double Parallelogram::getSideB() const
{
	return sideB;
}

double Parallelogram::getAngleA() const
{
	return angleA;
}

double Parallelogram::area() const
{
	return sideA * sideB * sin(angleA * (M_PI/ 180.0));
}



Rectangle::Rectangle() : Parallelogram(1.0, 2.0, 90.0)
{
}

Rectangle::Rectangle(double A , double B ) : Parallelogram(A, B, 90.0)
{
}

double Rectangle::area() const
{
	return getSideA() * getSideB();
}



Square::Square() : Parallelogram(1.0, 1.0 , 90.0)
{
}

Square::Square(double A = 1.0) : Parallelogram(A, A, 90.0)
{
}

double Square::area() const
{
	return getSideA() * getSideA();
}



Rhombus::Rhombus() : Parallelogram(1.0, 1.0, 45.0)
{
}

Rhombus::Rhombus(double A , double anA ) : Parallelogram(A, A, anA)
{
}

double Rhombus::area() const
{
	return getSideA() * getSideA() * sin(getAngleA() * (M_PI / 180.0));
}



Circle::Circle() : radius(1.0)
{
}

Circle::Circle(double R) : radius(R)
{
}

double Circle::area() const
{
	return radius * radius * M_PI;
}
