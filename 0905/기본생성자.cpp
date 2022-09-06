#include <iostream>
using namespace std;

class ixcTest
{
private:
    int m_nA;
public:
    //기본 생성자
    ixcTest() : m_nA(0){
        cout << "Call the Constructor" << endl;
    }
     //소멸자
    ~ixcTest()
    {
        cout << "Call the Destructor" << endl;
    }
    //복사 생성자
    ixcTest(const ixcTest& test) : m_nA(test.m_nA)
    {
        cout << "Call the Copy Constructor" << endl;
    }
    //복사 대입 연산자
    ixcTest& operator=(const ixcTest& test)
    {
        this->m_nA = test.m_nA;
        cout << "Call the Copy Assignment Constructor" << endl;
        return *this;
    }
};
int main()
{
    ixcTest t1; //기본 생성자
    ixcTest t2 = t1; // 복사 생성자
    ixcTest t3(t1); // 복사 생성자
    t3 = t1; // 복사 대입 생성자

    return 0;
}