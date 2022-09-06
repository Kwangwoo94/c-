#include <iostream>
using namespace std;

class Parent
{
public:
    virtual void print()
    {
        cout << "Parent Class" << endl;
    }
};

class Child : public Parent
{
public:
    virtual void print()
    {
        cout << "Child Class" << endl;
    }
};

int main()
{
    Parent *p = new Parent;
    Child *c = new Child;

    p->print();
    c->print();

    return 0;
}