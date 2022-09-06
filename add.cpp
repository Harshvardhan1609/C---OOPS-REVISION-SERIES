#include <iostream>
using namespace std;

class add
{
    public:
    int a , b , c;
    void sum();
};

void add::sum()
{
    cout<<a+b+c;
}

int main()
{
    add a[5];
    a[0].a = 12;
    a[0].b = 12;
    a[0].c = 12;
    a[0].sum();
    a[1].a = 12;
    a[1].b = 12;
    a[1].c = 12;
    a[1].sum();

    return 0;
}