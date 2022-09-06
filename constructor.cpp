#include <iostream>
using namespace std;

class A
{
    private:
    int a,b;
    public:
    A(int x , int y) //Parameterized constructor
    {
        a=x;
        b=y;
    }
    A()//Default constructor
    {
        a=10;
        b=90;
    }

    A( A &t)
    {
        a = t.a;
        b = t.b;
    }

    void giveoutput()
    {
        cout<<a+b<<endl;
    }

    ~A()
    {
        cout<<"Destructor is called"<<endl;
    }

};

int main()
{
    A a(12,3);
    A a2 = a;
    a2.giveoutput();


    return 0;
}