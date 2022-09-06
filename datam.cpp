#include <iostream>
using namespace std;

class A
{
    private:
    int a; //data member
    public:
    void setdata(int x)
    {
        a=x;
    }
    void getdata() //member function
    {
        cout<<a<<endl;
    }
};

int main()
{
    A add;
    add.setdata(102);
    add.getdata();
    return 0;
}