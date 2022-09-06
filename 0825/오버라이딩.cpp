#include <iostream>
using namespace std;

class A
{
public:
    A(){};
    ~A(){};

    virtual int test(int x)
    {
        cout << "int A::test(int x)" << endl;
        return x;
    }
};

class B : public A
{
public:
    B(){};
    ~B(){};
    
    int test(int x)
    {
        cout << "int B::test(int x)" << endl;
        return x;
    }
};

int main()
{
    B* b = new B;
    b->test(3);

    A* a = b;
    a->test(3);

    delete b;
    return 0;
}