#ifndef ARRAYPOINT_H_INCLUDED
#define ARRAYPOINT_H_INCLUDED
#include "Point.h"

class ArrayPoint
{
    int tamanho;
    Point *aray;
    public:

        ArrayPoint();
        ArrayPoint(int);
        ArrayPoint(Point [], const int, int);
        ArrayPoint(const ArrayPoint &);

        void print();
        void _push_back(const Point &);
        void _insert(const int, const Point &);
        void _remove(const int);
        const int getSize()const ;
        void _clear();
        ~ArrayPoint();
};
#endif // ARRAYPOINT_H_INCLUDED
