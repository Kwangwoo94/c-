#include <iostream>
using namespace std;

class ixcTest
{
public:
    ixcTest(){}
    ~ixcTest(){}

    int test(int x)
    {
        cout << "int test(int x)" << endl;
        return 0;
    }

    int test(char x)
    {
        cout << "int test(char x)" << endl;
        return 0;
    }

    void test(int x,int y)
    {
        cout << "void test(int x,int y)" << endl;
    }
};
int main()
{
    ixcTest t;
    t.test(1);
    t.test('x');
    t.test(1,2);

    return 0;
}