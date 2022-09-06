#include <iostream>
using namespace std;

class A
{
    protected:
        int a;
    public:
        void setdata()
        {
           a=10;
        }
        virtual void mu3() = 0;
};
class B: public A
{
    public:
    void mu3()
    {
        cout<<a*3<<endl;
    }

};
int main()
{
    B b;
    b.setdata();
    b.mu3();
    return 0;
}