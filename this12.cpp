#include <iostream>
using namespace std;

class A
{
    private:
    int a;
    int b;
    public:
    A(int a, int b)
    {
        this->a=a;
        this->b=b;
    }
    void giveout()
    {
        cout<<a+b;
    }
};

int main()
{
    A a1(12,34);
    a1.giveout();

    return 0;
}