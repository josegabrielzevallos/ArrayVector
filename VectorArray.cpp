#include "VectorArray.h"

VectorArray::VectorArray()
{
    this->tamanho = 0;
    this->a = new _vector[tamanho];
}

VectorArray::VectorArray(int x)
{
    this->tamanho = x;
    this->a = new _vector[x];
}

VectorArray::VectorArray(_vector b[], const int x, int lenV)
{
    if(x<=lenV)
    {
        this->tamanho = x;
        this->a = new _vector[tamanho];
        for(int i=0; i<tamanho; i++)
            this->a[i] = b[i];
    }
    else
    {
        this->tamanho = x;
        cout << "fuera de rango";
    }
}

VectorArray::VectorArray(VectorArray &o)
{
    this->tamanho = o.tamanho;

    this->a = new _vector[tamanho];
    for(int i=0; i<tamanho; i++)
        this->a[i] = o.a[i];
}

void VectorArray::print()
{
    for(int i=0; i<tamanho; i++)
    {
        cout << "vector ["<< i << "]" <<endl;
        this->a[i].print();
    }
}

void VectorArray::_push_back(const _vector &z)
{
    VectorArray temp(tamanho);
    for(int i=0; i<tamanho; i++)
        temp.a[i] = this->a[i];

    delete[] this->a;
    ++this->tamanho;
    this->a = new _vector[tamanho];

    for(int i=0; i<tamanho-1; i++)
        this->a[i] = temp.a[i];
    this->a[tamanho-1] = z;
}

void VectorArray::_insert(const int position, const _vector &p)
{
    int temp = this->getSize();
    if(temp<position)
        cout << "fuera de rango" << endl;
    else
    {
        _vector temp = this->a[position];
        a[position] = p;

        for(int i=1; (i+position)< tamanho; i++)
        {
            _vector temp2 = this->a[position+i];
            this->a[position+i] = temp;
            temp = temp2;
        }
    }
}

void VectorArray::_remove(const int position)
{
    int j;
    for(int i=1,j=0; (i+position)<tamanho; i++,j++)
    {
        _vector temp = this->a[position+i];
        this->a[position+j] = temp;
    }

    VectorArray t(tamanho-1);
    for(int i=0; i<tamanho-1; i++)
        t.a[i] = this->a[i];
    delete[] this->a;
    this->a = new _vector[tamanho-1];
    for(int i=0; i<tamanho-1; i++)
        this->a[i] = t.a[i];
    --tamanho;
}

const int VectorArray::getSize()const
{
    return this->tamanho;
}

void VectorArray::_clear()
{
    delete[] a;
    tamanho = 0;
}

VectorArray::~VectorArray()
{
    delete[] a;
}
