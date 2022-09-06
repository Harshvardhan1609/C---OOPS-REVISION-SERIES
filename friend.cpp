#include <iostream>
using namespace std;

class A
{
    private:
    int a=1;
    int b=3;
    public:
    friend class abc;
};

class abc
{
    public:
    void print(A a1)
    {
        cout<<a1.a+a1.b<<endl;
    }
};

int main()
{
    abc a2;
    A a1;
    a2.print(a1);
    return 0;
}