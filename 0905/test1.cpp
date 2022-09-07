#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;

//캡슐화가 깨지지 않게...? 0830
class ixcStudent
{
private:
    int m_nStuNum;
    char* m_pszName;
    int m_nGrade;
    ixcStudent(){}
    ixcStudent(const ixcStudent& stu){}
public:
    ~ixcStudent(){
        //m_pszName = nullptr;
        delete []m_pszName;
        cout << "Destructor" << endl;
        }
    ixcStudent(int _nStuNum,const char* _pszName) : m_nStuNum(0),m_pszName(nullptr),m_nGrade(0){
        cout << "Generated" << endl;
        if(_pszName != "" && _nStuNum != 0)
        {
            cout << "IN" << endl;
            m_nStuNum = _nStuNum;
            m_pszName = nullptr;
            m_pszName = new char[strlen(_pszName)+1];
            strcpy(m_pszName,_pszName);
        }
        else
        {
            cout << "Please Type the Name" << endl;
            exit(EXIT_FAILURE);
        }
    }
    char* GetName(){
        return this->m_pszName;
    }
    void GetGrade(){
        cout << GetName() << "'s Grade is " << this->m_nGrade << endl;
    }
    void Study(){
        cout << GetName() << " Study!" << endl;
        m_nGrade += 10;
    }
    void Play(){
        cout << GetName() << " Play!" << endl;
        if(m_nGrade <= 20)
        {
            m_nGrade = 0;
        }
        else{
            m_nGrade -= 20;
        }
    }
};

int main(void)
{
    ixcStudent stu1(130924,"Nam");
    //ixcStudent stu2(12345,"Han");
    
    //stu1.ixcStudent(1111,"n");
    //stu2.Study();
    //stu2.Study();
    //stu2.GetName();
    //stu2.GetGrade();
    stu1.Play();
    stu1.Play();
    stu1.Study();
    stu1.Study();
    stu1.GetGrade();
    return 0;
}