#include <iostream>
#include <cstring>
using namespace std;

//캡슐화가 깨지지 않게...? 0830
class ixcStudent
{
private:
    int m_nStuNum;
    char* m_pszName;
    int m_nGrade;
public:
    ixcStudent() : m_nStuNum(0),m_pszName(""),m_nGrade(0){};
    ~ixcStudent(){};

    ixcStudent(int _nStuNum,char* _pszName,int _nGrade) : m_nStuNum(_nStuNum),m_pszName(_pszName),m_nGrade(_nGrade)
    {
        m_nStuNum = _nStuNum;
        m_pszName = new char[strlen(_pszName)+1];
        strcpy(m_pszName,_pszName);
        m_nGrade = _nGrade;
        delete []m_pszName;
    }
    char* GetName()
    {
        return this->m_pszName;
    }
    int GetGrade()
    {
        cout << GetName() << "'s Grade is " << this->m_nGrade << endl;;
    }
    void Study()
    {
        cout << GetName() << " Study!" << endl;
        m_nGrade += 10;
    }
    void Play()
    {
        cout << GetName() << " Play!" << endl;
        m_nGrade -= 20;
    }
};

int main(void)
{
    ixcStudent stu1(130924,"Nam",100);
    ixcStudent stu2;

    stu2.Study();
    stu1.Play();
    stu1.GetGrade();
    stu2.GetGrade();
    stu1.Play();
    stu2.Study();
    stu1.GetGrade();
    stu2.GetGrade();
    stu1.Study();
    stu2.Study();
    stu1.GetGrade();
    stu2.GetGrade();
    stu1.Study();
    stu2.Study();
    stu1.GetGrade();
    stu2.GetGrade();

    return 0;
}