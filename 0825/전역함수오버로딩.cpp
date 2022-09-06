#include <iostream>
using namespace std;
//기본 생성자 초기화 리스트 / friend 사용 안해야 하나?
class ixcTest
{
private:
    int m_nNum1,m_nNum2;
public:
    ixcTest() : m_nNum1(0),m_nNum2(0){}
    ~ixcTest(){}

    ixcTest(int _nNum1,int _nNum2) : m_nNum1(_nNum1), m_nNum2(_nNum2) {}

    void Print()
    {
        cout << "num1 : " << m_nNum1 << " num2 : " << m_nNum2 << endl;
    }

    friend ixcTest operator+(const ixcTest& test1,const ixcTest& test2)
    {
        ixcTest temp(test1.m_nNum1+test2.m_nNum1,test1.m_nNum2+test2.m_nNum2);
        return temp;
    };
};


int main()
{
    ixcTest t1(1,2);
    ixcTest t2(2,1);
    ixcTest t3 = t1+t2; //ixcTest t3=operator+(t1,t2);

    t1.Print();
    t2.Print();
    t3.Print();
    return 0;
}
