#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    virtual void fun()
    {
        cout << "fun of Base" << endl;
    }
};

class Derived : public Base
{
public:
    void fun()
    {
        cout << "fun of Derived" << endl;
    }
};

int main()
{
    Base *p = new Derived();
    p->fun();

    return 0;
}