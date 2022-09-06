#include <iostream>
using namespace std;

class summing
{
    public:
    void sum(int a=1, int b=9)
    {
        cout<<a+b;
    }
    void sum(string a , string b)
    {
        cout<<a+b;
    }
};

int main()
{
    summing s1;
    s1.sum();
    s1.sum("Harsh ","Purohit");
    return 0;
}