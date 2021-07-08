#pragma once
class Figure
{
public:
	virtual double area() const = 0;
};

class Parallelogram : public Figure
{
private:
	double sideA;
	double sideB;
	double angleA;
public:
	Parallelogram();
	Parallelogram(double A, double B, double anA);
	double getSideA() const;
	double getSideB() const;
	double getAngleA() const;
	double area() const override;
};

class Circle : public Figure
{
private:
	double radius;
public:
	Circle();
	Circle(double R);
	double area() const override;
};

class Rectangle : public Parallelogram
{
public:
	Rectangle();
	Rectangle(double A, double B);
	double area() const override;
};

class Square : public Parallelogram
{
public:
	Square();
	Square(double A);
	double area() const override;
};

class Rhombus : public Parallelogram
{
public:
	Rhombus();
	Rhombus(double A, double anA);
	double area() const override;
};