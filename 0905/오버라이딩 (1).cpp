#include <iostream>
using namespace std;

class ixcTestA{
public:
    ixcTestA(){};
    virtual ~ixcTestA(){};

    virtual int Test(int x)
    {
        cout << "int ixcTestA::test(int x)" << endl;
        return x;
    }
};

class ixcTestB : public ixcTestA{
public:
    ixcTestB(){};
    virtual ~ixcTestB(){};
    
    int Test(int x)
    {
        cout << "int ixcTestB::test(int x)" << endl;
        return x;
    }
};

int main()
{
    ixcTestB* pB = new ixcTestB;
    pB->Test(3);
    ixcTestA* pA = new ixcTestA;
    pA->Test(5);
    
    delete pB;
    delete pA;
    return 0;
}