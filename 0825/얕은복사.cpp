#include <iostream>
#include <cstring>
using namespace std;

//기본 생성자 초기화 리스트 작성 08-30
class ixcTest
{
private:
    char *m_pszName;
    int m_nAge;

public:
    ixcTest() : m_pszName(NULL),m_nAge(0){}
    ~ixcTest(){}

    ixcTest(char* _pszName,int _nAge){
        m_pszName = _pszName;
        m_nAge = _nAge;
    }
    void Print()
    {
        cout << "name : " << m_pszName << endl;
        cout << "age : " << m_nAge << endl;
    }
};

int main()
{
    ixcTest t1("Nam",29);
    ixcTest t2(t1);

    t1.Print();
    t2.Print();
    return 0;
}