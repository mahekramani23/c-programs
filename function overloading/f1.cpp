#include<iostream>
using namespace std;
class Test
{
    public:
    void add()
    {
        cout<<"default constructor is called..."<<endl;
    }
    void add(int a)
    {
        cout<<"square of a is : "<<a*a<<endl;
    }
    void add(int x,int y)
    {
        cout<<"Addition of x and y is : "<<x+y<<endl;
    }
    void add(int a,int b,int c)
    {
        cout<<"Addition of a,b and c is : "<<a+b+c<<endl;
    }    
};

    int main()
    {
        Test t;

        t.add();
        t.add(10);
    }
    