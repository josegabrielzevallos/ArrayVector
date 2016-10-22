#include "Point.h"

Point::Point()
{
    this->x = 1.0;
    this->y = 1.0;
}

Point::Point(double x, double y)
{
    this->x = x;
    this->y = y;
}

Point::Point(const Point &p)
{
    this->x = p.x;
    this->y = p.y;
}

void Point::setx(double x)
{
    this->x = x;
}

void Point::sety(double y)
{
    this->y = y;
}

double Point::getx()
{
    return this->x;
}

double Point::gety()
{
    return this->y;
}

void Point::print()
{
    cout<<"X es : " << x;
    cout<<" Y es : " << y<<endl;
}

void Point::mody(double x, double y)
{
    this->x = x;
    this->y = y;
}

Point::~Point(){}
