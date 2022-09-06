#include <iostream>
#include <cstring>
using namespace std;

//생성자 초기화 / 멤버변수 초기화 / 할당 제거
class ixcTest
{
private:
    char *m_pszName;
    int m_nAge;
public:
    ixcTest() : m_pszName(""),m_nAge(0){}
    ~ixcTest(){delete []m_pszName;}
    ixcTest(char* _pszName,int _nAge) : m_pszName(_pszName),m_nAge(_nAge){
        m_pszName = new char[strlen(_pszName)+1];
        strcpy(m_pszName,_pszName);
        m_nAge = _nAge;
        
    }
    ixcTest(const ixcTest& test) : m_pszName(test.m_pszName),m_nAge(test.m_nAge){
        m_pszName = new char[strlen(test.m_pszName)+1];
        strcpy(m_pszName,test.m_pszName);
        m_nAge = test.m_nAge;
    }
    void Print(){
        cout << "name : " << m_pszName << endl;
        cout << "age : " << m_nAge << endl;
    }
};
int main()
{
    ixcTest t1("Name",29);
    ixcTest t2(t1);
    ixcTest t3;   

    t1.Print();
    t2.Print();
    t3.Print();
    return 0;
}