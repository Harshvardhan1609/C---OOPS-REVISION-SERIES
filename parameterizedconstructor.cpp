#include <iostream>
using namespace std;

class sum
{
    public:
    int a , b;
    sum(int x , int y)
    {
        a=x;
        b=y;
    }
    int add()
    {
        cout<<a+b;
    }
};

int main()
{
    sum s(12,12);
    s.add();
    return 0;
}