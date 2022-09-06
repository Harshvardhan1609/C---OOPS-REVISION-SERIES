#include <iostream>
using namespace std;

int sum(int x, int y, int z=10)
{
    return x+y+z;
}


int main()
{
    cout<<sum(12,3)<<endl;
    cout<<sum(11,22,33);
    return 0;
}