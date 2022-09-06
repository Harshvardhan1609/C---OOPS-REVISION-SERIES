#include <iostream>
using namespace std;

int sum(int a , int b)
{
    return a+b;
}

string sum(string a ,string b)
{
    return a+b;
}

int main()
{
    cout<<sum(1,2)<<endl;
    cout<<sum("harsh ","puohit");
    return 0;
}