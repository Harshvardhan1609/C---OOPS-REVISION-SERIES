#include <iostream>
using namespace std;

class xyz{
    private:
    char ch = 'h';
    int num = 11;
    public:
        friend class abc;
};

class abc{
    public:
    void display( xyz obj)
    {
        cout<<obj.ch<<endl;
        cout<<obj.num<<endl;
    }
};

int main()
{
    abc obj;
    xyz obj2;
    obj.display(obj2);

    return 0;
}