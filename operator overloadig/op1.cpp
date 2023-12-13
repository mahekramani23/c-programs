//Binary operator overloading
#include<iostream>
using namespace std;

class Box
{
    int l,b,h;
    public :
    int Volume()
    {
        return l*b*h;
    }
    void setData(int p,int q,int r)
    {
        l=p,b=q,h=r;
    }
    Box operator+(Box &n)
    {
        Box t;
        t.l = l + n.l;
        t.b = l + n.b;
        t.h = l + n.h;
        return t;
    }
    Box operator++(int)
    {
        Box t;
        t.l = ++l;
        t.b = ++b;
        t.h = ++h;
    }
};
