#include <iostream>
using namespace std;

class A
{
    int a;
    public:
     void setdata(int a)
     {
        this->a=a;
     }
     void getdata()
     {
        cout<<a<<endl;
     }
};

int main()
{
    A a;
    a.setdata(12);
    a.getdata();
    return 0;
}