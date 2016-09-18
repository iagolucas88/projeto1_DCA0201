#include "point.h"
#include <iostream>
#include <cmath>

using namespace std;



Point::Point(float px, float py)
{
    cout << "Construtor\n";
    x = px; y = py;
}

Point::~Point()
{
    cout << "Destrutor\n";
}

void Point::setX(float px)
{
    x = px;
}

void Point::setY(float py)
{
    y = py;
}

void Point::setXY(float px, float py)
{
    x = px; y = py;
}

float Point::getX(void)
{
    return x;
}

float Point::getY(void)
{
    return y;
}

Point Point::add(Point p1)
{
    Point a_p;

    a_p.x = x + p1.x;
    a_p.y = y + p1.y;

    return a_p;
}

Point Point::sub(Point p1)
{
    Point s_p;

    s_p.x = x - p1.x;
    s_p.y = y - p1.y;

    return s_p;
}

float Point::norma(void)
{
    return(sqrt(x*x + y*y));
}

void Point::translata(float a, float b)
{
    x = x + a;
    y = y + b;
}

void Point::imprime(void)
{
    cout << "(" << x << ", " << y << ")\n";
}




