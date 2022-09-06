#include <iostream>
using namespace std;

class ixcBase
{
private:
    int nA;
public:
    int nB;
    ixcBase(){}
    virtual ~ixcBase(){}
protected:
    int nC;
};
//protected 상속
class ixcDerived : protected ixcBase
{
public:
    ixcDerived(){}
    virtual ~ixcDerived(){}
    ixcDerived(int _nA,int _nB,int _nC)
    {
        nA = _nA; //protected 상속->private 접근 불가
        nB = _nB;
        nC = _nC;
    }
};

int main()
{
    ixcDerived derived = ixcDerived(1,2,3);
    derived.nA; // private 접근 불가
    derived.nB; // public 접근 불가
    derived.nC; // protected 접근 불가

    return 0;
}