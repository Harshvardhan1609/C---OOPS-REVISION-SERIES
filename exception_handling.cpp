#include <iostream>
using namespace std;

class A
{
    int x , y;
    public:
    A(int a , int b)
    {
        x=a;
        y=b;
    }

    void divide()
    {
        try
        {
            if(y==0)
            {
                throw 1;
            }
        }
    }
};

int main()
{

    return  0;
}