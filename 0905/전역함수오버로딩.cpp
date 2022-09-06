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
    ixcTest(int _nNum1,int _nNum2) : m_nNum1(_nNum1), m_nNum2(_nNum2){}
    
    friend ostream& operator<<(ostream& os,const ixcTest& test)
    {
        os << test.m_nNum1 << ", " << test.m_nNum2;
        return os;
    } 
};  

int main()
{
    ixcTest test(2,4);
    cout << test;
    return 0;
}
