#include <iostream>
using namespace std;

class sum
{
    public:
    int a , b;
    sum(int x, int y){
        a=x;
        b=y;
    }
    friend void add(sum s);
};

void add(sum s)
{
    cout<<s.a+s.b<<endl;
}

int main()
{
    sum s(12,12);
    add(s);

    return 0;
}