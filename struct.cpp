#include <iostream>
using namespace std;

struct Cla
{
    string name;
    int rollno;
    string male;
    string going;
}s2;

int main()
{
    Cla c1;
    c1.name = "Harsh";
    c1.rollno =12;
    cout<<"YOUR NAME IS "<<c1.name<<endl;

    return 0;
}