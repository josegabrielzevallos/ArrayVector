#include "Vector.h"

_vector::_vector()
{
    this->uno = Point();
    this->dos = Point();
}

_vector::_vector(Point u, Point v)
{
    this->uno = u;
    this->dos = v;
}

_vector::_vector(const _vector &p)
{
    this->uno = p.uno;
    this->dos = p.dos;
}

void _vector::insertar1(Point u)
{
    this->uno = u;
}

void _vector::insertar2(Point v)
{
    this->dos = v;
}

Point _vector::get1()
{
    return this->uno;
}

Point _vector::get2()
{
    return this->dos;
}

void _vector::print()
{
    cout << "Punto uno ";
    this->uno.print();
    cout << "Punto dos ";
    this->dos.print();
}

_vector::~_vector(){}
