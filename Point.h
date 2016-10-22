#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
#include <iostream>

using namespace std;

class Point
{
    double x,y;
    public:
        Point();
        Point(double, double);
        Point(const Point &);

        double getx();
        double gety();
        void setx(double);
        void sety(double);
        void print();
        void mody(double, double);

        ~Point();
};

#endif // POINT_H_INCLUDED


