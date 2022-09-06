#include <iostream>
using namespace std;
// A , B -> C

class A
{
    public:
    int a;
    int b;
    void printA()
    {
        cout<<a<<" "<<b<<endl;
    }
};

class B
{
    public:
    int c;
    int d;
    void printB()
    {
        cout<<c<<" "<<d<<endl;
    }
};

class C : public A , public B
{
    public:
    int e;
    int f;
    void printC()
    {
        cout<<e<<" "<<f<<endl;
    }

};

int main()
{
    C c1;
    C b1;
    b1.a = 1;
    b1.b = 1;
    b1.printA();
    c1.a = 3;
    c1.b = 4;
    c1.printA();
    return 0;
}