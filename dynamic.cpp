#include <iostream>
using namespace std;

int main()
{
    int* num = NULL;
    num = new int;
    *num = 9;
    cout<<"The number is "<<*num;
    delete num;
    cout<<*num;
    return 0;
}