#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED
#include "Point.h"

class _vector
{
        Point uno;
        Point dos;
    public:
        _vector();
        _vector(Point, Point);
        _vector(const _vector &);

        void insertar1(Point);
        void insertar2(Point);
        Point get1();
        Point get2();
        void print();
        ~_vector();

};

#endif // VECTOR_H_INCLUDED
