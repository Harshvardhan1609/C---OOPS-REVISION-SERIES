#include <iostream>
using namespace std;

class add{
    public:
        int a;
        int &anothernameofa = a;
        int b;
    int sum(){cout<<a+b;};
}num[10];
int main()
{
    add num1;
    num1.anothernameofa = 1;
    num1.b = 2;
    num1.sum();
    add num2;
    num2.anothernameofa = 2;
    num2.b = 3;
    num2.sum();
    return 0;
}