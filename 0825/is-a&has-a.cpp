//is-a 관계
class Person
{
public:
    int age;
    char* name;
};

class Student : public Person
{
public:
    char* schooladdr;
    char* major;
};

//has-a 관계
class Gun
{
public:
    int power;
    int bullet;
};

class Police
{
public:
    Gun gun;
}




