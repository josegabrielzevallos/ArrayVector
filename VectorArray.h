#ifndef VECTORARRAY_H_INCLUDED
#define VECTORARRAY_H_INCLUDED
#include "Vector.h"

class VectorArray
{
        _vector *a;
        int tamanho;
    public:
        VectorArray();
        VectorArray(int);
        VectorArray(_vector [], const int, int);
        VectorArray(VectorArray &);

        void print();
        void _push_back(const _vector &);
        void _insert(const int, const _vector &);
        void _remove(const int);
        const int getSize()const ;
        void _clear();
        ~VectorArray();
};


#endif // VECTORARRAY_H_INCLUDED
