#include <iostream>
using namespace std;

class ixcParent
{
public:
    ixcParent(){}
    virtual ~ixcParent(){}
    virtual void Print()
    {
        cout << "ixcParent Class" << endl;
    }
};

class ixcChild : public ixcParent
{
public:
    ixcChild(){}
    virtual ~ixcChild(){}
    virtual void Print()
    {
        cout << "ixcChild Class" << endl;
    }
};

int main()
{
    ixcParent *pParent = new ixcParent;
    ixcChild *pChild = new ixcChild;

    pParent->Print();
    pChild->Print();

    delete pParent;
    delete pChild;
    return 0;
}