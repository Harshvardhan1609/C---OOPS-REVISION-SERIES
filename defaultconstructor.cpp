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
    void add()
    {
        cout<<a+b;
    }
    ~sum()
    {
        cout<<"Destructor is called";
    }
};

int main()
{
    sum s(134,12);
    s.add();
    cout<<endl;
    return 0;
}