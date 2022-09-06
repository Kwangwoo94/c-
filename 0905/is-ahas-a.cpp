#include <iostream>
#include <stdlib.h>
using namespace std;

class ixcMosterInfo{
private:
    char* m_pszName;
    int m_nHP;
    int m_nDefense;
    int m_nOffense;
public:
    ixcMosterInfo():m_pszName(0),m_nHP(0),m_nDefense(0),m_nOffense(0){}
    ixcMosterInfo(char* _pszName,int _nHP,int _nDefense,int _nOffense)
    :m_pszName(_pszName),m_nHP(_nHP),m_nDefense(_nDefense),m_nOffense(_nOffense){}
    virtual ~ixcMosterInfo(){}

    char * GetName(){return m_pszName;}
    int GetHP(){return m_nHP;}
    int GetDef(){return m_nDefense;}
    int GetOff(){return m_nOffense;}
};
class ixcMonster{
protected:
    ixcMosterInfo m_Info; // has-a 상속
public:
    ixcMonster():m_Info(0,0,0,0){}
    ixcMonster(ixcMosterInfo _Info):m_Info(_Info){}
    virtual ~ixcMonster(){}
    void Attack(){cout << m_Info.GetName() << " Attack!!" << endl;}
    void Defense(){cout << m_Info.GetName() << " Defense!!" << endl;}
    void ShowInfo(){
        cout << "=======Info========" << endl;
        cout << "Name : " << m_Info.GetName() << endl;
        cout << "HP : " << m_Info.GetHP() << endl;
        cout << "Defense : " << m_Info.GetDef() << endl;
        cout << "Offense : " << m_Info.GetOff() << endl;
        cout << "===================" << endl;}
};

class ixcMushroom : public ixcMonster //is-a 관계
{
public:
    ixcMushroom(){
        ixcMonster::m_Info = ixcMosterInfo("Mushroom",100,10,20);
    }
    virtual ~ixcMushroom(){}
};

class ixcSlime : public ixcMonster // is-a 관계
{
public:
    ixcSlime(){
        ixcMonster::m_Info = ixcMosterInfo("Slime",90,30,30);
    }
    virtual ~ixcSlime(){}
};

int main()
{
    ixcMushroom mon1;
    ixcSlime mon2;
    mon1.ShowInfo();
    mon1.Attack();
    mon1.Defense();
    mon2.ShowInfo();
    mon2.Attack();
    mon2.Defense();
}




