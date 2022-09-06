#include <iostream>
using namespace std;

class A
{
    public:
    int addadasda;
    int &a = addadasda;

    void giveoutput()
    {
        cout<<addadasda;
    }

};

int main()
{
    A a1;
    a1.a=90;
    a1.giveoutput();
    return 0;
}