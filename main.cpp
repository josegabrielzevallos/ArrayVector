#include "Point.h"
#include "ArrayPoint.h"
#include "Vector.h"
#include "VectorArray.h"

int main()
{


/*
    Point a =  Point(4,5);
    Point b =  Point(5,4);
    Point c =  Point(6,6);
    ArrayPoint temp = ArrayPoint(4);
    Point *tt = new Point[4];

    // temp6 = temp.getSize();
    //cout << temp6 << endl;
    temp._insert(2,a);
    //cout << "2"<< endl;
    temp._insert(2,b);


    //temp._insert(2,c);
    ArrayPoint ty = ArrayPoint(tt,2,4);
    ty.print();

    ArrayPoint doo = temp;
    doo._insert(0,c);
    doo.print();
    temp.print();
*/

/*
    ArrayPoint temp = ArrayPoint(4);
    Point a =  Point(4,5);
    Point b =  Point(5,4);
    Point c =  Point(6,6);

    temp._insert(0,a);
    temp._insert(1,b);
    temp._insert(2,c);

    ///temp.print();
    ///cout << endl;
    ///temp._remove(1);
    ///temp.print();
    temp._push_back(c);
    temp.print();
*/

/*
    Point a =  Point(4,5);
    Point b =  Point(5,4);
    _vector t = _vector(Point(4,4),Point(7,7));


    _vector y = t;
    y.insertar1(a);
    y.print();
    t.print();
*/


    _vector *a = new _vector[2];
    _vector t = _vector(Point(4,4),Point(7,7));
    _vector tt = _vector(Point(2,4),Point(8,5));
    _vector ttt = _vector(Point(20,0),Point(8.4,5));
    a[0] =t;
    a[1] =t;



    VectorArray b(a,2,2);
    b._push_back(tt);
    b._insert(0, ttt);
    b._remove(0);
    b.print();
    cout << b.getSize();


    return 0;
}
