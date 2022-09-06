#include <iostream>
using namespace std;

class A
{
    public:
        int var;
        int var2;
};

class B : public virtual A
{
    public:
        int var3;
        int var4;
};

class C: public virtual A
{
    public:
        int var5;
        int var6;
};

class D : public B , public C
{

};

int main()
{
    D a;
    a.var;

    return 0;
}