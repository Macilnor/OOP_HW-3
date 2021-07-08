// OOP_HW3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Figure.h"
#include "Car.h"
#include "Fraction.h"
#include "Card.h"

using namespace std;

int main()
{

    Parallelogram paral(2.0, 4.0, 60.0);
    Circle circ(2.0);
    Rectangle rect(2.0, 4.0);
    Square sq(2.0);
    Rhombus rho(2.0, 60.0);

    Figure* pParal = &paral;
    Figure* pCirc = &circ;
    Figure* pRect = &rect;
    Figure* pSq = &sq;
    Figure* pRho = &rho;

    cout << "Area of parallelogram : " << pParal->area() << endl;
    cout << "Area of circle : " << pCirc->area() << endl;
    cout << "Area of rectangle : " << pRect->area() << endl;
    cout << "Area of square : " << pSq->area() << endl;
    cout << "Area of rhombus : " << pRho->area() << endl;

    Minivan mini;

    Fraction a(1, 4);
    Fraction b(2, 8);
    Fraction c(2, 3);

    string out = (a == b) ? " True " : " False ";
    cout << " 1/4 == 2/8 : " << out << endl;

    out = (a != c) ? " True " : " False ";
    cout << " 1/4 != 2/3 : " << out << endl;

    out = (a > c) ? " True " : " False ";
    cout << " 1/4 > 2/3 : " << out << endl;

    out = (a <= b) ? " True " : " False ";
    cout << " 1/4 <= 2/8 : " << out << endl;

    out = (c < b) ? " True " : " False ";
    cout << " 2/3 < 2/8 : " << out << endl;

    out = (a >= c) ? " True " : " False ";
    cout << " 1/4 >= 2/3 : " << out << endl;


    cout << " 1/4 + 2/3 = " << (a + c).getFraction() << endl;
    cout << " 2/3 - 2/8 = " << (c - b).getFraction() << endl;
    cout << " 1/4 * 2/8 = " << (a * b).getFraction() << endl;
    cout << " 1/4 / 2/3 = " << (a / c).getFraction() << endl;

    Card card(S_PIKES, R_QUEEN);
    card.Flip();
    cout << card.getValue();
}


