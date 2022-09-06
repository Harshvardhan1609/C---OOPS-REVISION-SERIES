#include <iostream>
using namespace std;

class A
{
    public:
    void printfunction()
    {
        display();
    }
     virtual void display()
    {
        cout<<"Base class"<<endl;
    }
};

class B : public A
{
    public:
    virtual void display(){
        cout<<"Derived class"<<endl;
    }
};

int main()
{
    A a;
    a.printfunction();
    B b;
    b.printfunction();
    return 0;
}